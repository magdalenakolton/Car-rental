		
#pragma once
#include<iostream>
#include<vector>
using namespace std;
#include "Pojazd.h"

class Rower : public Pojazd
{
public:
	
	string kolor;
	string marka;
	
	Rower(string, string);
	Rower();
	
	void zwrocRower();
	void dodajRower();

	vector<Rower> DostRowery;
	vector<Rower> WypRowery;

};
