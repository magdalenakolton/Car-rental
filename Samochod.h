#pragma once
#include<iostream>
#include<vector>
#include "Motocykl.h"

using namespace std;


class Samochod : public Motocykl
{
public:

	int ilosc_miejsc_siedzacych;
	double pojemnoscbagaznika;

	Samochod(int, double);
	Samochod();

	void dodajSamochod();
	void zwrocSamochod();

	vector<Samochod> DostSamochody;
	vector<Samochod> Samochody;
};
