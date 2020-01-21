#pragma once
#pragma once
#include<iostream>
#include<vector>
using namespace std;

class Platnosc {
public:
	string faktura;
	int numer;
	float kwota;

	Platnosc();
	Platnosc(string, int, float);
	void dodaj_Platnosc();

	vector<Platnosc> Platnosci;
};