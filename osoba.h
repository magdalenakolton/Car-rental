#pragma once
#include <string>
using namespace std;

class Osoba {

public:
	Osoba(string imie, string nazwisko, string data_ur);
	string getImie()const { return m_imie; };
	string getNazwisko()const { return m_nazwisko; };
	string getData_ur()const { return m_data_ur; };
	int getPesel()const { return m_pesel; }
	int getNrTel() const { return m_numer_tel; }

	string m_imie, m_nazwisko, m_data_ur;
	int m_pesel, m_numer_tel;

};