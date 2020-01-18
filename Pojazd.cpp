#include<iostream>
#include<string>
#include "Samochod.h"
#include "Motocykl.h"
#include "Rower.h"
#include "Pojazd.h"
using namespace std;

Pojazd::Pojazd(int a, string b)
{
	cena = a;
	data_produkcji = b;
}

Pojazd::Pojazd()
{
	cena= 0;
	data_produkcji= "brak";
}


