#include <iostream>
#include <vector>
#include <string>
#include "osoba.h"

using namespace std;

class Klient {
public: 
	Klient();
	Klient(string, string, string, int, int);

	void zarejestrujKlienta();
	void wyswietlKlientow();

	string imie, nazwisko, data_ur;
	int pesel, numer_tel;
	vector<Klient> Klienci;
};
