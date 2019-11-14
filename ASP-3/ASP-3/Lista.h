#pragma once


class Lista
{
public:
	virtual bool jel_pun() = 0;
	virtual void dodaj_na_kraj(int x) = 0;
	virtual void dodaj_na_pocetak(int x) = 0;
	virtual int ukloni_sa_pocetka() = 0;
	virtual int ukloni_sa_kraja() = 0;
	virtual bool jel_prazna() = 0;
	virtual int get(int index) = 0;
	virtual int get_brojac() = 0;
	virtual void print() = 0;
};