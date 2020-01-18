#include<iostream>
#include<string>
#include "Samochod.h"
#include "Motocykl.h"
#include "Rower.h"
#include "Pojazd.h"
using namespace std;

Rower::Rower(string a, string b)
{
	kolor = a;
	marka = b;
}

Rower::Rower()
{
	kolor = "brak";
	marka = "brak";
}


