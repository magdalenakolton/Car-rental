#include<iostream>
#include<string>
#include "Samochod.h"
#include "Motocykl.h"
#include "Rower.h"
#include "Pojazd.h"
using namespace std;


Motocykl::Motocykl(int a, int b)
{
	pojemnosc_silnika = a;
	spalanie = b;
}

Motocykl::Motocykl()
{
	pojemnosc_silnika = 0;
	spalanie = 0;
}


