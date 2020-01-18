#pragma once
#include<iostream>
#include<vector>
using namespace std;

class Pojazd
{
public:
	
	int cena;
	string data_produkcji;
	
	Pojazd();
	Pojazd(int, string); 
	
	void zwrocPojazd();
	void dodajPojazd();
	void wyswietlPojazd();
	
};