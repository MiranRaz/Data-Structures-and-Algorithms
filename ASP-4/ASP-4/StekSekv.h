#pragma once
#include"Stek.h"
#include<iostream>
using namespace std;
template <class T>
class StekSekv :public Stek<T> {
	int max_size = 2;
	int brojac = 0;
	T* niz = new T[max_size];
public:
	bool jel_pun() {
		return brojac == max_size;
	}
	void dodaj(T x) {
		if (jel_pun()) {
			prosiri_niz();
		}
		niz[brojac] = x;
		brojac++;
	}
	T ukloni() {
		brojac--;
		T x = niz[brojac];
		return x;
	}
	bool jel_prazna() {
		return brojac == 0;
	}
	void print() {
		for (int i = 0; i < brojac; i++) {
			cout << niz[i] << "|";
		}
		cout << endl;
	}
	void prosiri_niz() {
		T* noviNiz = new T[max_size * 2];
		for (int i = 0; i < brojac; i++) {
			noviNiz[i] = niz[i];
		}
		max_size *= 2;
		delete[]niz;
		niz = noviNiz;
	}
};



