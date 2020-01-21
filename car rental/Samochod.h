#pragma once
#include<iostream>
#include<vector>
#include "Motocykl.h"

using namespace std;


class Samochod : public Motocykl
{
public:

	int ilosc_miejsc_siedzacych;
	double pojemnosc_bagaznika;
	int pojemnosc_silnika;
	string kolor, marka, data_produkcji;
	string cena;

	Samochod(string, string, string, string, int, int, int, double);
	Samochod();

	void dodajSamochod();
	void zwrocSamochod();
	void wypozyczSamochod();

	vector<Samochod> DostSamochody;
	vector<Samochod> WypSamochody;
};