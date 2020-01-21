#include "wypozyczalnia.h"
#include <string>
#include <iostream>

using namespace std;


class rezerwacja {
public:
	string data_rozpoczecia;
	string data_zakonczenia;

	rezerwacja(string, string);
	rezerwacja();

	void zarezerwuj();

};