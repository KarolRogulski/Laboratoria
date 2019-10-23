#include "Data.h"
#include <iostream>
using namespace std;

Data::Data()
	: m_nDzien(1)
	, m_nMiesiac(1)
	, m_nRok(2000)
{
}


Data::~Data()
{
}


void Data::ustaw(int d, int m, int r)
{
	m_nDzien = d;
	m_nMiesiac = m;
	m_nRok = r;
	Koryguj();
}


int Data::Dzien() const
{
	return m_nDzien;
}

int Data::Miesiac() const
{
	return m_nMiesiac;
}


int Data::Rok() const
{
	return m_nRok;
}


void Data::Wypisz() const
{
	cout << Dzien() << "-" << Miesiac() << "-" << Rok();
}


void Data::Wpisz()
{
	int dzien, miesiac, rok;
	cout << "Podaj dzien:";
	cin >> dzien;
	cout << endl << "Podaj miesiac:";
	cin >> miesiac;
	cout << endl << "Podaj rok:";
	cin >> rok;
	ustaw(dzien, miesiac, rok);
}


void Data::Koryguj()
{
	bool jestPrzestepnyLuty = (m_nMiesiac == 2 && ((m_nRok % 4 == 0 && m_nRok % 100 != 0) || m_nRok % 400 == 0));
	bool miesiacMa31Dni = (m_nMiesiac == 1 || m_nMiesiac == 3 || m_nMiesiac == 5 || m_nMiesiac == 7
		|| m_nMiesiac == 8 || m_nMiesiac == 10 || m_nMiesiac == 12);
	bool miesiacMa30Dni = (m_nMiesiac == 4 || m_nMiesiac == 6 || m_nMiesiac == 9 || m_nMiesiac == 11);

	if (m_nDzien < 1) {
		m_nDzien = 1;
	}else if (miesiacMa31Dni && m_nDzien > 31) {
		m_nDzien = 31;
	}else if (miesiacMa30Dni && m_nDzien > 30) {
		m_nDzien = 30;
	}

	if (jestPrzestepnyLuty && m_nDzien > 29) {
		m_nDzien = 29;
	}else if (!jestPrzestepnyLuty && m_nDzien > 28) {
		m_nDzien = 28;
	}
}

// Zwroc 1 jesli data wzorca jest pozniejsza od daty obiektu, -1 w przeciwnym wypadku lub 0 jesli sa rowne
int Data::Porownaj(const Data & wzor)
{
	if (Rok() < wzor.Rok()) {
		return 1;
	}
	else if (Rok() > wzor.Rok()) {
		return -1;
	}
	if (Miesiac() < wzor.Miesiac()) {
		return 1;
	}
	else if (Miesiac() > wzor.Miesiac()) {
		return -1;
	}
	if (Dzien() < wzor.Dzien()) {
		return 1;
	}
	else if (Dzien() > wzor.Dzien()) {
		return -1;
	}
	return 0;
}
