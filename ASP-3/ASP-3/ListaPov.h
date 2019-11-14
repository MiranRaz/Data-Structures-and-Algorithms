#pragma once
#include<iostream>
#include"Cvor.h"
#include "Lista.h"
using namespace std;
class ListaPov:public Lista {
	Cvor* prvi = nullptr;
public:
	void dodaj_na_pocetak(int x)
	{
		int broj;
		cout << "broj = ";
		cin >> broj;
		//korak 1
		Cvor* n = new Cvor(broj);

		//korak 2
		n->next = prvi;

		//korak 3
		prvi = n;

	}

	bool jel_pun()
	{
		return false;
	}

	void dodaj_na_kraj(int x)
	{
		if (prvi == nullptr) {
			prvi = new Cvor(x);
			return;
		}
		Cvor* t = prvi;
		while (t->next != nullptr) {
			t = t->next;
		}
		t->next = new Cvor(x);
	}
	int ukloni_sa_pocetka() {
		if (jel_prazna())
		{
			throw exception("lista je prazna");
		}

		//korak 1
		Cvor* t = prvi;

		//korak 2
		prvi = prvi->next;

		int b = t->info;

		//korak 3
		delete t;

		return b;
	}
	int ukloni_sa_kraja() {
		if (jel_prazna())
		{
			throw exception("lista je prazna");
		}
		Cvor* t = prvi;
		Cvor* b = nullptr;
		while (t->next!=nullptr)
		{
			b = t;
			t = t->next;
		}
		int x = t->info;
		delete t;
		if (b == nullptr) {
			prvi = nullptr;
		}
		else{
			b->next = nullptr;
		}
		return x;
	}
	bool jel_prazna() {
		return prvi == nullptr;
	}
	int get(int index) {
		int b = 0;
		Cvor* t = prvi;
		while (t != nullptr) {
			if (b == index) {
				int x = t->info;
				return x;
			}
			b++;
			t = t->next;
		}
		throw exception("Neispravan Indeks");
	}
	int get_brojac() {
		int brojac = 0;
		Cvor* t = prvi;
		while (t!=nullptr)
		{
			brojac++;
			t = t->next;
		}
		return brojac;
	}
	void print() {
		Cvor* t = prvi;
		while (t != nullptr) {
			cout << t->info << endl;
			t = t->next;
		}	
	}

};