#pragma once
#include<iostream>
#include<vector>
using namespace std;

class Pojazd
{
public:
	
	string cena;
	string data_produkcji;
	
	Pojazd();
	Pojazd(string, string); 
	
	void zwrocPojazd();
	void dodajPojazd();
	void wypozyczPojazd();

	
};