#include<iostream>
#include<string>
#include "Samochod.h"
#include "Motocykl.h"
#include "Rower.h"
#include "Pojazd.h"
using namespace std;

extern Pojazd p;

Samochod::Samochod(int a, double b)
{
	ilosc_miejsc_siedzacych = a;
	pojemnosc_silnika = b;
}

Samochod::Samochod()
{
	pojemnosc_silnika = 0;
	spalanie = 0;
}