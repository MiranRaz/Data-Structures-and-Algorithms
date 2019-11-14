#pragma once
#include "Cvor.h"
#include "Stek.h"
#include <iostream>
using namespace std;

template <class T>
class StekPov : public Stek <T> {
	Cvor<T>* prvi = nullptr;
public:
	void dodaj(T x)
	{
		Cvor<T>* n = new Cvor<T>(x);
		n->next = prvi;
		prvi = n;
	}
	bool jel_prazna() {
		return prvi == nullptr;
	}
	bool jel_pun() {
		return false;
	}
	T ukloni() {
		if (jel_prazna()) {
			throw exception("stek je prazan");
		}
		Cvor<T>* t = prvi;
		prvi = prvi->next;
		T b = t->info;
		delete t;
		return b;
	}
	void print()
	{
		Cvor<T>* t = prvi;
		while (t->next!=nullptr)
		{
			cout << t->info << "|";
			t = t->next;
		}
		cout << endl;
	}
};
