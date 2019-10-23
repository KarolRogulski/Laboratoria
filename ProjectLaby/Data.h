#pragma once
class Data
{
public:
	Data();
	~Data();
private:
	int m_nDzien;
	int m_nMiesiac;
	int m_nRok;
public:
	void ustaw(int d, int m, int r);
	int Dzien() const;
	int Miesiac() const;
	int Rok() const;
	void Wypisz() const;
	void Wpisz();
	void Koryguj();
	int Porownaj(const Data & wzor);
};

