#include<iostream>
#include<string>
#include "Samochod.h"
#include "Motocykl.h"
#include "Rower.h"
#include "Pojazd.h"
using namespace std;

Pojazd::Pojazd(string a, string b)
{
	cena = a;
	data_produkcji = b;
}

Pojazd::Pojazd()
{
	cena= "brak";
	data_produkcji= "brak";
}


