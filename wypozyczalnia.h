#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Wypozyczalnia {
public:
	Wypozyczalnia();
	void wybor();
	void dodajPojazd();
	void wyswietlPojazdy();
	void wypozyczPojazd();
	void sprawdzDostepnosc();
	void zwrocPojazd();
	void zarejestrujKlienta();
	void wyswietlKlientow();

private:
	vector<klient> m_klienci;
};