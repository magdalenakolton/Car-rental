#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "klient.h";
#include "Motocykl.h"
#include "Pojazd.h"
#include "Rower.h"
#include "Samochod.h"
#include "Platnosc.h"
#include "rezerwacja.h"

using namespace std;

class Wypozyczalnia {
public:

	void wybor(); 
	void sprawdzDostepnosc();
	void zakoncz();
};