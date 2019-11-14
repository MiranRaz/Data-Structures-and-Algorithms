#pragma once
#include<iostream>
#include"Cvor.h"
using namespace std;
class ListaPov {
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


	}
	int ukloni_sa_pocetka() {
		//korak 1
		Cvor* temp = prvi;

		//korak 2
		prvi = prvi->next;

		int broj = temp->info;

		//korak 3
		delete temp;


		return broj;
	}
	int ukloni_sa_kraja() {
		return 0;
	}
	bool jel_prazna() {
		return prvi == nullptr;
	}
	int get(int index) {
		return 0;
	}
	int get_brojac() {
		return 0;
	}
	
};