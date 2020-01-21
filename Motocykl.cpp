#include<iostream>
#include<string>
#include "Samochod.h"
#include "Motocykl.h"
#include "Rower.h"
#include "Pojazd.h"
using namespace std;


Motocykl::Motocykl(string a, string b, string cenaa, string data_prod, int poj, int sp)
{
	cena = cenaa;
	data_produkcji = data_prod;
	kolor = a;
	marka = b;
	pojemnosc_silnika = poj;
	spalanie = sp;
}

Motocykl::Motocykl()
{
	pojemnosc_silnika = 0;
	spalanie = 0;
}


