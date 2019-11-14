#pragma once
#include "Cvor.h"
#include "Lista.h"
#include <iostream>
using namespace std;

template <class T>
class ListaPov : public Lista<T> {
	Cvor<T>* prvi = nullptr;
public:
	void dodaj_na_pocetak(T x)
	{

		//korak 1
		Cvor<T>* n = new Cvor<T>(x);

		//korak 2
		n->next = prvi;

		//korak 3
		prvi = n;

	}
	void dodaj_na_kraj(T x)
	{
		if (prvi == nullptr)
		{
			prvi = new Cvor<T>(x);
			return;
		}
		Cvor<T>* t = prvi;
		while (t->next != nullptr)
		{
			t = t->next;
		}
		t->next = new Cvor<T>(x);
	}
	bool jel_prazna() {
		return prvi == nullptr;
	}
	bool jel_pun() {
		return false;
	}
	T ukloni_sa_pocetka() {

		if (jel_prazna())
		{
			throw exception("lista je prazna");
		}

		//korak 1
		Cvor<T>* t = prvi;

		//korak 2
		prvi = prvi->next;

		T b = t->info;

		//korak 3
		delete t;


		return b;
	}
	T ukloni_sa_kraja() {

		if (jel_prazna())
		{
			throw exception("lista je prazna");
		}

		Cvor<T>* t = prvi;
		Cvor<T>* b = nullptr;
		while (t->next != nullptr)
		{
			b = t;
			t = t->next;
		}

		T x = t->info;
		delete t;

		if (b == nullptr)
		{
			prvi = nullptr;
		}
		else
		{
			b->next = nullptr;
		}

		return x;
	}	
	T get(int index) {

		int b = 0;
		Cvor<T>* t = prvi;
		while (t != nullptr)
		{
			if (b == index)
			{
				T x = t->info;
				return x;
			}
			b++;
			t = t->next;
		}

		throw exception("neispravan indeks");
	}
	int get_brojac() {
		int b = 0;
		Cvor<T>* t = prvi;
		while (t != nullptr)
		{
			b++;
			t = t->next;

		}

		return b;
	}
	void print()
	{
		Cvor<T>* t = prvi;
		while (t != nullptr)
		{
			cout << t->info << "|";
			t = t->next;
		}
		cout << endl;
	}
};
