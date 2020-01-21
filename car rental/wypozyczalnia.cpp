#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "wypozyczalnia.h"

using namespace std;


void Wypozyczalnia::wybor() {

	int haslo = 1234, spr;
	system("cls");
	cout << " Podaj PIN administratora: ";
	cin >> spr;
	Klient k;
	Samochod s;
	Pojazd p;
	if (spr == haslo) {

		int a;
		cout << "=================================================" << endl
			<< "=                                                =" << endl
			<< "=             Co chcesz zrobic?                  =" << endl
			<< "=                                                =" << endl
			<< "= 1. Dodaj pojazd do wypozyczalni.               =" << endl
			<< "= 2. Wyswietl dostepne pojazdy.                  =" << endl
			<< "= 3. Wypozycz pojazd.                            =" << endl
			<< "= 4. Zwroc pojazd.                               =" << endl
			<< "= 5. Zarejestruj nowego klienta.                 =" << endl
			<< "= 6. Wyswietl zarejestrowanych klientow.         =" << endl
			<< "= 7. Zakoñcz dzia³anie programu                  =" << endl
			<< "=                                                =" << endl
			<< "==================================================" << endl;
		cout << "Wybrana opcja: ";
		cin >> a;

		switch (a) {
		case 1:
			p.dodajPojazd();
			break;
		case 2:
			sprawdzDostepnosc();
			break;
		case 3:
			p.wypozyczPojazd();
		
		case 4:
			p.zwrocPojazd();
			break;
		case 5:
			k.zarejestrujKlienta();
			break;
		case 6:
			k.wyswietlKlientow();
			break;
		case 7:
			zakoncz();

		default:
			cout << "Podaj wlasciwe dane!" << endl;
			break;
		}

	}

}

void Pojazd::zwrocPojazd() {
	Rower r;
	Motocykl m;
	Samochod s;

	int a;

	cout << "======================================" << endl
		<< "= Jaki rodzaj pojazdu chcesz zwróciæ? =" << endl
		<< "= 1. Rower                            =" << endl
		<< "= 2. Motocykl                         =" << endl
		<< "= 3. Samochód                         =" << endl
		<< "=======================================" << endl;
	cout << "Wybrana opcja: ";
	cin >> a;

	switch (a) {

	case (1):
		
		r.zwrocRower();

	case (2):
	
		m.zwrocMotocykl();

	case (3):
		
		s.zwrocSamochod();
	}

}
void Rower::zwrocRower() {
	int cena;
	string data_produkcji, marka, kolor;

	std::cout << "Który pojazd z listy chcesz zwróciæ?" << endl;
	for (auto&i : WypRowery) {
		std::cout << i.cena << " " << i.data_produkcji <<" "<<i.marka<<" "<<i.kolor;
	}

	std::cout << "Cena: " << endl;
	std::cin >> cena;
	std::cout << "Data produkcji: " << endl;
	std::cin >> data_produkcji;
	std::cout << "Marka: " << endl;
	std::cin >> marka;
	std::cout << "Kolor: " << endl;
	std::cin >> kolor;

	vector<Rower>::iterator i;

	for (i = WypRowery.begin(); i != WypRowery.end(); i++) {
		if ((*i).marka == marka && (*i).kolor == kolor && (*i).cena == cena && (*i).data_produkcji == data_produkcji) {
			WypRowery.erase(i);
			DostRowery.push_back(Rower(marka, kolor, cena, data_produkcji));
			std::cout << "Pomyœlnie zwrócono rower. " << endl;
		}
		else std::cout << "Brak podanego pojazdu w bazie." << endl;

	}
}
void Motocykl::zwrocMotocykl() {
	string cena;
	string data_produkcji, marka, kolor;
	int pojemnosc_silnika;
	double spalanie;

	std::cout << "Który motocykl z listy chcesz zwróciæ?" << endl;
	for (auto&i : WypMotocykle) {
		std::cout << i.cena << " " << i.data_produkcji << " " << i.marka << " " << i.kolor << " " << i.pojemnosc_silnika << " " << i.spalanie;
	}

	std::cout << "Cena: " << endl;
	std::cin >> cena;
	std::cout << "Data produkcji: " << endl;
	std::cin >> data_produkcji;
	std::cout << "Marka: " << endl;
	std::cin >> marka;
	std::cout << "Kolor: " << endl;
	std::cin >> kolor;
	std::cout << "Pojemnosc silnika:  " << endl;
	std::cin >> pojemnosc_silnika;
	std::cout << "Spalanie: " << endl;
	std::cin >> spalanie;

	vector<Motocykl>::iterator i;
	for (i = WypMotocykle.begin(); i != WypMotocykle.end(); i++) {
		if ((*i).marka == marka && (*i).kolor == kolor && (*i).cena == cena && (*i).data_produkcji == data_produkcji, (*i).pojemnosc_silnika == pojemnosc_silnika && (*i).spalanie == spalanie) {
			WypMotocykle.erase(i);
			DostMotocykle.push_back(Motocykl(marka, kolor, cena, data_produkcji, pojemnosc_silnika, spalanie));
			std::cout << "Pomyœlnie zwrócono rower. " << endl;
		}
		else std::cout << "Brak podanego pojazdu w bazie." << endl;

	}
	
}
void Samochod::zwrocSamochod() {
	string cena;
	double pojemnosc_bagaznika;
	int ilosc_miejsc_siedzacych, pojemnosc_bagaznika;
	string data_produkcji, marka, kolor;
	int pojemnosc_silnika;
	double spalanie;

	std::cout << "Który samochod z listy chcesz zwróciæ?" << endl;
	for (auto&i : WypSamochody) {
		std::cout << i.cena << " " << i.data_produkcji << " " << i.marka << " " << i.kolor<<" "<<i.pojemnosc_silnika<<" "<<i.ilosc_miejsc_siedzacych<<" "<<i.pojemnosc_bagaznika<<" "<<i.spalanie;
	}

	std::cout << "Cena: " << endl;
	std::cin >> cena;
	std::cout << "Data produkcji: " << endl;
	std::cin >> data_produkcji;
	std::cout << "Marka: " << endl;
	std::cin >> marka;
	std::cout << "Kolor: " << endl;
	std::cin >> kolor;
	std::cout << "Pojemnosc silnika:  " << endl;
	std::cin >> pojemnosc_silnika;
	std::cout << "Spalanie: " << endl;
	std::cin >> spalanie;
	std::cout << "Ilosc miejsc siedzacych: " << endl;
	std::cin >> ilosc_miejsc_siedzacych;
	std::cout << "Pojemnosc bagaznika: " << endl;
	std::cin >> pojemnosc_bagaznika;

	vector<Samochod>::iterator i;
	for (i = WypSamochody.begin(); i != WypSamochody.end(); i++) {
		if ((*i).marka == marka && (*i).kolor == kolor && (*i).cena == cena && (*i).data_produkcji == data_produkcji, (*i).pojemnosc_silnika == pojemnosc_silnika && (*i).spalanie == spalanie) {
			WypSamochody.erase(i);
			DostSamochody.push_back(Samochod(marka, kolor, cena, data_produkcji, pojemnosc_silnika, spalanie, ilosc_miejsc_siedzacych, pojemnosc_bagaznika));
			std::cout << "Pomyœlnie zwrócono rower. " << endl;
		}
		else std::cout << "Brak podanego pojazdu w bazie." << endl;

	}
}


void Pojazd::wypozyczPojazd() {
	Rower r;
	Motocykl m;
	Samochod s;


	int a;

	cout << "=========================================" << endl
		<< "= Jaki rodzaj pojazdu chcesz wypozyczyc? =" << endl
		<< "= 1. Rower                               =" << endl
		<< "= 2. Motocykl                            =" << endl
		<< "= 3. Samochód                            =" << endl
		<< "==========================================" << endl;
	cout << "Wybrana opcja: ";
	cin >> a;

	switch (a) {

	case (1):

		r.wypozyczRower();

	case (2):

		m.wypozyczMotocykl();

	case (3):

		s.wypozyczSamochod();
	}

}
void Rower::wypozyczRower() {
	int cena;
	string data_produkcji, marka, kolor;
	Platnosc p;
	rezerwacja r;

	std::cout << "Który pojazd z listy chcesz wypozyczyc?" << endl;
	for (auto&i : WypRowery) {
		std::cout << i.cena << " " << i.data_produkcji << " " << i.marka << " " << i.kolor;
	}

	std::cout << "Cena: " << endl;
	std::cin >> cena;
	std::cout << "Data produkcji: " << endl;
	std::cin >> data_produkcji;
	std::cout << "Marka: " << endl;
	std::cin >> marka;
	std::cout << "Kolor: " << endl;
	std::cin >> kolor;

	vector<Rower>::iterator i;

	for (i = WypRowery.begin(); i != WypRowery.end(); i++) {
		if ((*i).marka == marka && (*i).kolor == kolor && (*i).cena == cena && (*i).data_produkcji == data_produkcji) {
			DostRowery.erase(i);
			WypRowery.push_back(Rower(marka, kolor, cena, data_produkcji));
			std::cout << "Pomyœlnie wypozyczono rower. " << endl;
			r.zarezerwuj();
			p.dodaj_Platnosc();
		}
		else std::cout << "Brak podanego pojazdu w bazie." << endl;

	}


}
void Motocykl::wypozyczMotocykl() {
	string cena;
	string data_produkcji, marka, kolor;
	int pojemnosc_silnika;
	double spalanie;
	Platnosc p;
	rezerwacja r;

	std::cout << "Który motocykl z listy chcesz wypozyczyc?" << endl;
	for (auto&i : WypMotocykle) {
		std::cout << i.cena << " " << i.data_produkcji << " " << i.marka << " " << i.kolor << " " << i.pojemnosc_silnika << " " << i.spalanie;

	}

	std::cout << "Cena: " << endl;
	std::cin >> cena;
	std::cout << "Data produkcji: " << endl;
	std::cin >> data_produkcji;
	std::cout << "Marka: " << endl;
	std::cin >> marka;
	std::cout << "Kolor: " << endl;
	std::cin >> kolor;
	std::cout << "Pojemnosc silnika:  " << endl;
	std::cin >> pojemnosc_silnika;
	std::cout << "Spalanie: " << endl;
	std::cin >> spalanie;

	vector<Motocykl>::iterator i;
	for (i = WypMotocykle.begin(); i != WypMotocykle.end(); i++) {
		if ((*i).marka == marka && (*i).kolor == kolor && (*i).cena == cena && (*i).data_produkcji == data_produkcji, (*i).pojemnosc_silnika == pojemnosc_silnika && (*i).spalanie == spalanie) {
			DostMotocykle.erase(i);
			WypMotocykle.push_back(Motocykl(marka, kolor, cena, data_produkcji, pojemnosc_silnika, spalanie));
			std::cout << "Pomyœlnie wypozyczono rower. " << endl;
			r.zarezerwuj();
			p.dodaj_Platnosc();
		}
		else std::cout << "Brak podanego pojazdu w bazie." << endl;

	}

}
void Samochod::wypozyczSamochod() {
	string cena;
	double pojemnosc_bagaznika;
	int ilosc_miejsc_siedzacych, pojemnosc_bagaznika;
	string data_produkcji, marka, kolor;
	int pojemnosc_silnika;
	double spalanie;
	Platnosc p;
	rezerwacja r;

	std::cout << "Który samochod z listy chcesz wypozyczyc?" << endl;
	for (auto&i : WypSamochody) {
		std::cout <<i.cena << " " << i.data_produkcji << " " << i.marka << " " << i.kolor << " " << i.pojemnosc_silnika << " " << i.ilosc_miejsc_siedzacych << " " << i.pojemnosc_bagaznika << " " << i.spalanie;

	}

	std::cout << "Cena: " << endl;
	std::cin >> cena;
	std::cout << "Data produkcji: " << endl;
	std::cin >> data_produkcji;
	std::cout << "Marka: " << endl;
	std::cin >> marka;
	std::cout << "Kolor: " << endl;
	std::cin >> kolor;
	std::cout << "Pojemnosc silnika:  " << endl;
	std::cin >> pojemnosc_silnika;
	std::cout << "Spalanie: " << endl;
	std::cin >> spalanie;
	std::cout << "Ilosc miejsc siedzacych: " << endl;
	std::cin >> ilosc_miejsc_siedzacych;
	std::cout << "Pojemnosc bagaznika: " << endl;
	std::cin >> pojemnosc_bagaznika;

	vector<Samochod>::iterator i;
	for (i = WypSamochody.begin(); i != WypSamochody.end(); i++) {
		if ((*i).marka == marka && (*i).kolor == kolor && (*i).cena == cena && (*i).data_produkcji == data_produkcji, (*i).pojemnosc_silnika == pojemnosc_silnika && (*i).spalanie == spalanie) {
			DostSamochody.erase(i);
			WypSamochody.push_back(Samochod(marka, kolor, cena, data_produkcji, pojemnosc_silnika, spalanie, ilosc_miejsc_siedzacych, pojemnosc_bagaznika));
			std::cout << "Pomyœlnie wypozyczono samochod. " << endl;
			r.zarezerwuj();
			p.dodaj_Platnosc();
		}
		else std::cout << "Brak podanego pojazdu w bazie." << endl;

	}
}

void Pojazd::dodajPojazd() {
	Rower r;
	Motocykl m;
	Samochod s;

	int a;
	cout << "======================================" << endl
		<< "= Jaki rodzaj pojazdu chcesz dodac?   =" << endl
		<< "= 1. Rower                            =" << endl
		<< "= 2. Motocykl                         =" << endl
		<< "= 3. Samochód                         =" << endl
		<< "=======================================" << endl;
	cout << "Wybrana opcja: ";
	cin >> a;

	switch (a) {

	case (1):

		r.dodajRower();

	case (2):
	
		m.dodajMotocykl();

	case (3):
	
		s.dodajSamochod();

	default:
		cout << "Podaj wlasciwe dane!" << endl;
		break;
	}
}
void Rower::dodajRower() {
	int cena;
	string data_produkcji, marka, kolor;

	std::cout << "Cena: " << endl;
	std::cin >> cena;
	std::cout << "Data produkcji: " << endl;
	std::cin >> data_produkcji;
	std::cout << "Marka: " << endl;
	std::cin >> marka;
	std::cout << "Kolor: " << endl;
	std::cin >> kolor;

	DostRowery.push_back(Rower(marka, kolor, cena, data_produkcji));
	std::cout << "Pomyœlnie dodano rower. " << endl;
	
}
void Motocykl::dodajMotocykl() {
	string cena;
	string data_produkcji, marka, kolor;
	int pojemnosc_silnika;
	double spalanie;

	cout << "Cena: " << endl;
	cin >> cena;
	cout << "Data produkcji: " << endl;
	cin >> data_produkcji;
	cout << "Marka: " << endl;
	cin >> marka;
	cout << "Kolor: " << endl;
	cin >> kolor;
	cout << "Pojemnosc silnika:  " << endl;
	cin >> pojemnosc_silnika;
	cout << "Spalanie: " << endl;
	cin >> spalanie;

	DostMotocykle.push_back(Motocykl(marka, kolor, cena, data_produkcji, pojemnosc_silnika, spalanie));
	cout << "Pomyœlnie dodano motocykl. " << endl;
}
void Samochod::dodajSamochod() {
	string cena;
	int ilosc_miejsc_siedzacych, pojemnosc_bagaznika;
	string data_produkcji, marka, kolor;
	int pojemnosc_silnika;
	double spalanie;

	cout << "Cena: " << endl;
	cin >> cena;
	cout << "Data produkcji: " << endl;
	cin >> data_produkcji;
	cout << "Marka: " << endl;
	cin >> marka;
	cout << "Kolor: " << endl;
	cin >> kolor;
	cout << "Pojemnosc silnika:  " << endl;
	cin >> pojemnosc_silnika;
	cout << "Spalanie: " << endl;
	cin >> spalanie;
	cout << "Ilosc miejsc siedzacych: " << endl;
	cin >> ilosc_miejsc_siedzacych;
	cout << "Pojemnosc bagaznika: " << endl;
	cin >> pojemnosc_bagaznika;

	DostSamochody.push_back(Samochod(marka, kolor, cena, data_produkcji, pojemnosc_silnika, spalanie, ilosc_miejsc_siedzacych, pojemnosc_bagaznika));
	cout << "Pomyslnie dodano samochod." << endl;

}

void Wypozyczalnia::sprawdzDostepnosc() {
	Rower r;
	Motocykl m;
	Samochod s;

	vector<Rower>::iterator i;
	for (i = r.DostRowery.begin(); i != r.DostRowery.end(); i++) {
		std::cout << (*i).cena << " " << (*i).data_produkcji << " " << (*i).marka << " " << (*i).kolor;
	}

	vector<Motocykl>::iterator j;
	for (j = m.DostMotocykle.begin(); j != m.DostMotocykle.end(); j++) {
		std::cout << (*j).cena << " " << (*j).data_produkcji << " " << (*j).marka << " " << (*j).kolor << " " << (*j).pojemnosc_silnika << " " << (*j).spalanie;

	}

	vector<Samochod>::iterator k;
	for (k = s.DostSamochody.begin(); k != s.DostSamochody.end(); k++) {
		std::cout << (*k).cena << " " << (*k).data_produkcji << " " << (*k).marka << " " << (*k).kolor << " " << (*k).pojemnosc_silnika << " " << (*k).ilosc_miejsc_siedzacych << " " << (*k).pojemnosc_bagaznika << " " << (*k).spalanie;
	}

	
}
void Wypozyczalnia::zakoncz() {
	cout << "Nast¹pi³o wylogowanie." << endl;
	exit(0);
}
void Platnosc::dodaj_Platnosc() {

	cout << "Podaj kwote: " << endl;
	cin >> kwota;
	cout << "Podaj numer: " << endl;
	cin >> numer;
	cout << "Wystawic fakture? (tak/nie)" << endl;
	cin >> faktura;

	Platnosci.push_back(Platnosc(faktura, numer, kwota));

}

void Klient::zarejestrujKlienta() {

	string imie, nazwisko, data_ur;
	int pesel, nr_tel;

	cout << "Podaj imie: ";
	cin >> imie;
	cout << "Podaj nazwisko: ";
	cin >> nazwisko;
	cout << "Podaj date urodzenia: ";
	cin >> data_ur;
	cout << "Podaj numer PESEL: ";
	cin >> pesel;
	cout << "Podaj numer telefonu: ";
	cin >> nr_tel;

	Klienci.push_back(Klient(imie, nazwisko, data_ur, pesel, nr_tel));
	cout << "Dodano klienta." << endl << endl;

}
void Klient::wyswietlKlientow() {
	vector<Klient>::iterator i;
	for (i = Klienci.begin(); i != Klienci.end(); i++)
	{
		cout << "Imie: " << (*i).imie << "Nazwisko: " << (*i).nazwisko 
			<< "Data urodzenia: " << (*i).data_ur << "Pesel: " << (*i).pesel 
			<< "Numer telefonu: " << (*i).numer_tel << endl;
	}
}
