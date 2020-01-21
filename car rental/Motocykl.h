#pragma once
#include <iostream>
#include <vector>
#include "Rower.h"
#include <string>
using namespace std;


class Motocykl : public Rower
{
public:
	string cena;
	string data_produkcji, marka, kolor;
	int pojemnosc_silnika;
	int spalanie;

	Motocykl(string, string, string, string, int, int);
	Motocykl();

	void dodajMotocykl();
	void zwrocMotocykl();
	void wypozyczMotocykl();

	vector<Motocykl> WypMotocykle;
	vector<Motocykl> DostMotocykle;
};