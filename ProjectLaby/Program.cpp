#include <iostream>
#include "Data.h"
#include "Napis.h"
#include "Pracownik.h"

using namespace std;

int main() {
	Napis imie;
	Napis nazwisko;
	Data data;
	Pracownik pracownik;

	imie.Wpisz();
	nazwisko.Wpisz();
	data.ustaw(5, 5, 2011);

	pracownik.Imie(imie.Zwroc());
	pracownik.Nazwisko(nazwisko.Zwroc());
	cout << "pracownik wypisz: ";
	pracownik.DataUrodzenia(5, 5, 2011);

	pracownik.Wypisz();
	cout << " imie wypisz: ";
	imie.Wypisz();
	cout << " nazwisko wypisz: ";
	nazwisko.Wypisz();

	imie.Wpisz();

	return 1;
};