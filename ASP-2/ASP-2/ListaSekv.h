#pragma once
#include<iostream>
using namespace std;

class ListaSekv {
	int max_size = 2;
	int* niz = new int[max_size];
	int brojac = 0;
public:
	void prosiri_niz() {
		int* noviNiz = new int[max_size * 2];
		for (int i = 0; i < brojac; i++) {
			noviNiz[i] = niz[i];
		}
		delete[]niz;
		max_size *= 2;
		niz = noviNiz;
		cout << "Niz je prosiren" << endl;
	}
	void dodaj_na_pocetak(int x) {
		if (jel_pun()) {
			prosiri_niz();
		}
		for (int i = brojac; i >= 0; i--) {
			niz[i] = niz[i - 1];
		}
		niz[0] = x;
		brojac++;
	}
	void dodaj_na_kraj(int x) {
		if (jel_pun()) {
			prosiri_niz();
		}
		niz[brojac] = x;
		brojac++;
	}
	int ukloni_sa_pocetka() {
		int x = niz[0];
		for (int i = 1; i < brojac; i++) {
			niz[i - 1] = niz[i];
		}
		brojac--;
		return x;
	}
	int ukloni_sa_kraja() {
		int x = niz[brojac];
		brojac--;
		return x;
	}
	bool jel_pun() { return brojac == max_size; }
	bool jel_prazna() { return brojac == 0; }
	/*int operator[](int index) {
	}*/
	int get_brojac() { return brojac; }
	int get_indeks(int i) { return niz[i]; }
};