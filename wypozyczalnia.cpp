#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <wypozyczalnia.h>

using namespace std;

Wypozyczalnia::Wypozyczalnia() {

	ifstream plik1("klienci.txt");
	while (!plik1.eof())
	{
		string tab[12];
		for (int i = 0; i < 12; i++)
			plik1 >> tab[i];
		if (!plik1.eof())
			m_klienci.push_back(Klient(tab[10], tab[10], tab[10], tab[11], tab[9]));
		//imie, nazwisko, data ur., pesel, telefon
	}
	plik1.close();
}

void Wypozyczalnia::wybor() {
	int haslo = 1234;
	system("cls");
	int spr;
	cout << "  Podaj PIN administratora:";
	cin >> spr;
	if (spr == haslo) {

		int a;
		cout << "=================================================" << endl
			<< "=                                                =" << endl
			<< "=             Co chcesz zrobic?                  =" << endl
			<< "=                                                =" << endl
			<< "= 1. Dodaj pojazd do wypozyczalni.               =" << endl
			<< "= 2. Wyswietl dostepne pojazdy.                  =" << endl
			<< "= 3. Wypozycz pojazd.                            =" << endl
			<< "= 4. Sprawdz dostepnosc pojazdu.                 =" << endl
			<< "= 5. Zwroc pojazd.                               =" << endl
			<< "= 6. Zarejestruj nowego klienta.                 =" << endl
			<< "= 7. Wyswietl zarejestrowanych klientow.         =" << endl
			<< "= 8. Zakoñcz dzia³anie programu                  =" << endl
			<< "=                                                =" << endl
			<< "==================================================" << endl;
		cout << "Wybrana opcja: ";
		cin >> a;

		switch (a) {
		case 1:
			dodajPojazd();
			break;
		case 2:
			wyswietlPojazdy();
			break;
		case 3:
			wypozyczPojazd();
		case 4:
			sprawdzDostepnosc();
			break;
		case 5:
			zwrocPojazd();
			break;
		case 6:
			zarejestrujKlienta();
			break;
		case 7:
			wyswietlKlientow();
			break;
		case 8:
			cout << "Nast¹pi³o wylogowanie." << endl;
			exit(0);

		default:
			cout << "Podaj wlasciwe dane!" << endl;
			break;
		}

	else {
		cout << "Podaj poprawne haslo." << endl;
		system("pause");
		system("cls");
	}

	break;
	}
}