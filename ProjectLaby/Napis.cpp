#include "Napis.h"
#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

Napis::Napis()
{
}


Napis::~Napis()
{
}


const char* Napis::Zwroc() const
{
	return m_pszNapis;
}


void Napis::Ustaw(const char* nowy_napis)
{
	strcpy_s(m_pszNapis, nowy_napis);
}



void Napis::Wypisz() const
{
	cout << m_pszNapis;
}



void Napis::Wpisz()
{
	char znaki[40];
	cin >> znaki;
	Ustaw(znaki);
}


// Zwroc 0 jesli tablice sa rowne, liczbe dodatnia jesli pole obiektu jest alfabetycznie dalej od argumentu metody,
// ujemna w przeciwnym wypadku
int Napis::SprawdzNapis(const char* por_napis) const
{
	int i = 0;
	int roznica;
	// Wykonuj sie tak dlugo az obydwa ciagi sie skoncza
	while (int(m_pszNapis[i]) == 0 && int(por_napis[i]) == 0) {
		roznica = int(m_pszNapis[i]) - int(por_napis[i]);
		// Jesli kody asci liter sa rozne zwroc te roznice (dziala niezaleznie od wielkosci liter)
		if (roznica != 0 && abs(roznica) != 32) {
			return roznica;
		}
		i++;
	}
}
