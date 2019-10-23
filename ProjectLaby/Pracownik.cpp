#include "Pracownik.h"
#include "Napis.h"
#include "Data.h"
#include <iostream>
using namespace std;

Pracownik::Pracownik()
{
}


Pracownik::~Pracownik()
{
}

const char* Pracownik::Imie() const {
	return m_Imie.Zwroc();
}

const char* Pracownik::Nazwisko() const {
	return m_Nazwisko.Zwroc();
}

void Pracownik::Imie(const char* nowe_imie) {
	m_Imie.Ustaw(nowe_imie);
}

void Pracownik::Nazwisko(const char* nowe_nazwisko) {
	m_Nazwisko.Ustaw(nowe_nazwisko);
}

void Pracownik::DataUrodzenia(int nowy_dzien, int nowy_miesiac, int nowy_rok) {
	m_DataUrodzenia.ustaw(nowy_dzien, nowy_miesiac, nowy_rok);
}

void Pracownik::Wypisz() const {
	m_Imie.Wypisz();
	cout << " ";
	m_Nazwisko.Wypisz();
	cout << " ";
	m_DataUrodzenia.Wypisz();
}

void Pracownik::Wpisz() {
	cout << "Podaj imie: ";
	m_Imie.Wpisz();
	cout << endl << "Podaj nazwisko; ";	
	m_Nazwisko.Wpisz();
	m_DataUrodzenia.Wpisz();
}

int Pracownik::SprawdzImie(const char* por_imie) const {
	return m_Imie.SprawdzNapis(por_imie);
}

int Pracownik::SprawdzNazwisko(const char* por_nazwisko) {
	return m_Nazwisko.SprawdzNapis(por_nazwisko);
}
