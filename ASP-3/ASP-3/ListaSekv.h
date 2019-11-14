#pragma once
#include<iostream>
using namespace std;
#include"Lista.h"

class ListaSekv :public Lista {
	int max_size = 2;
	int* niz = new int[max_size];
	int brojac = 0;
public:
	void print()
	{
		for (int i = 0; i < get_brojac(); i++)
		{
			cout << niz[i] << " | ";
		}
		cout << endl;
	}

	void dodaj_na_pocetak(int x)
	{
		if (jel_pun())
		{
			prosiri_niz();
		}
		for (int i = brojac; i >= 1; i--)
		{
			niz[i] = niz[i - 1];
		}
		niz[0] = x;
		brojac++;

	}

	bool jel_pun()
	{
		return brojac == max_size;
	}

	void prosiri_niz()
	{
		int* noviNiz = new int[max_size * 2];
		for (int i = 0; i < brojac; i++)
		{
			noviNiz[i] = niz[i];
		}
		max_size *= 2;
		delete[]niz;
		niz = noviNiz;
		std::cout << "Niz je prosiren" << std::endl;
	}

	void dodaj_na_kraj(int x)
	{
		if (jel_pun())
		{
			prosiri_niz();
		}
		niz[brojac] = x;
		brojac++;

	}
	int ukloni_sa_pocetka() {
		int x = niz[0];
		for (int i = 1; i < brojac; i++)
		{
			niz[i - 1] = niz[i];
		}
		brojac--;
		return  x;
	}
	int ukloni_sa_kraja() {
		brojac--;
		int x = niz[brojac];
		return x;
	}
	bool jel_prazna() {
		return brojac == 0;
	}
	int get(int index) {
		return niz[index];
	}
	int get_brojac() {
		return brojac;
	}
};