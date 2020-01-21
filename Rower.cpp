#include<iostream>
#include<string>
#include "Samochod.h"
#include "Motocykl.h"
#include "Rower.h"
#include "Pojazd.h"
using namespace std;

Rower::Rower(string a, string b, int cenaa, string data_prod)
{
	cena = cenaa;
	data_produkcji = data_prod;
	kolor = a;
	marka = b;
}

Rower::Rower()
{
	kolor = "brak";
	marka = "brak";
	data_produkcji = 
}


