#include "wypozyczalnia.h"
#include "rezerwacja.h"
#include <string>
#include <iostream>

using namespace std;

rezerwacja::rezerwacja(string a, string b) {
	data_rozpoczecia = a;
	data_zakonczenia = b;
}

rezerwacja::rezerwacja() {
	data_rozpoczecia = "brak";
	data_zakonczenia = "brak";
}

