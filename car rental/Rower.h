		
#pragma once
#include<iostream>
#include<vector>
using namespace std;
#include "Pojazd.h"

class Rower : public Pojazd
{
public:
	
	int cena;
	string data_prod;
	string kolor;
	string marka;
	
	Rower(string, string, int, string);
	Rower();
	
	void zwrocRower();
	void dodajRower();
	void wypozyczRower();

	vector<Rower> DostRowery;
	vector<Rower> WypRowery;

};