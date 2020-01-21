#include<iostream>
#include<string>
#include "Platnosc.h"
using namespace std;

Platnosc::Platnosc(string fakturaa, int nr, float kwotaa)
{
	faktura = fakturaa;
	numer = nr;
	kwota = kwotaa;
}

Platnosc::Platnosc()
{
	faktura = "nie";
	numer = 0;
	kwota = 0;
}


