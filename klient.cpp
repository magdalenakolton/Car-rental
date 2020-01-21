#include <iostream>
#include "klient.h"
#include "osoba.h"
#include <vector>
#include <string>

using namespace std;

Klient::Klient(string a, string b, string c, int d, int e){
	imie = a;
	nazwisko = b;
	data_ur = c;
	pesel = d;
	numer_tel = e;
};

Klient::Klient() {
	imie = "brak";
	nazwisko = "brak";
	data_ur = "brak";
	pesel = 0;
	numer_tel = 0;
}
