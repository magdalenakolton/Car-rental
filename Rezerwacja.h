#pragma once
#include <ctime>

class Rezerwacja
{
	struct tm data_rozpoczecia;
	struct tm data_zakonczenia;
public:
	Rezerwacja();
	bool zarezerwuj();
	bool sprawdz_dostepnosc();
};

