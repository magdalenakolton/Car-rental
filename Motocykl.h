#pragma once
#include<iostream>
#include<vector>
#include "Rower.h"
using namespace std;


class Motocykl : public Rower
{
public:
	int pojemnosc_silnika;
	int spalanie;

	Motocykl(int, int);
	Motocykl();

	void dodajMotocykl();
	void zwrocMotocykl();

	vector<Motocykl> Motocykle;
};