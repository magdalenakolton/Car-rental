#include <iostream>
#include <string>
#include "Samochod.h"
#include "Motocykl.h"
#include "Rower.h"
#include "Pojazd.h"
using namespace std;

extern Pojazd p;

Samochod::Samochod(string a, string b, string cenaa, string data_prod, int pojemnosc_sil, int spalanie, int miejsca, double pojemnosc)
{
	ilosc_miejsc_siedzacych = miejsca;
	pojemnosc_silnika = pojemnosc_sil;
	pojemnosc_bagaznika = pojemnosc;
	cena = cenaa;
	data_produkcji = data_prod;
	kolor = b;
	marka = a;
}

Samochod::Samochod()
{
	pojemnosc_silnika = 0;
	spalanie = 0;
}