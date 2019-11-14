#include<iostream>
#include"ListaSekv.h"
#include"ListaPov.h"
using namespace std;
int main() {
	ListaPov x;
	//ListaSekv y;
	int u;
	do
	{

		cout << "1.	Dodaj na po?etak" << endl;
		cout << "2.	Dodaj na kraj" << endl;
		cout << "3.	Ukloni sa po?etka" << endl;
		cout << "4.	Ukloni sa kraja" << endl;
		cout << "5.	Print" << endl;
		cout << "6.	Sve ukloni" << endl;
		cout << "7.	Exit" << endl;
		cin >> u;
		int b;
		switch (u)
		{
		case 1:
			cout << "Unesite broj: ";
			cin >> b;
			x.dodaj_na_pocetak(b);
			break;
		case 2:
			cout << "Unesite broj: ";
			cin >> b;
			x.dodaj_na_kraj(b);
			break;
		case 3:
			b = x.ukloni_sa_pocetka();
			cout << "Uklonjeno sa pocetka " << b << endl;
			break;
		case 4:
			b = x.ukloni_sa_kraja();
			cout << "Uklonjeno sa kraja " << b << endl;
			break;
		case 5:
			for (int i = 0; i < x.get_brojac(); i++)
			{
				b = x.get(i);
				cout << b << " | ";
			}
			cout << endl;
			break;
		case 6:
			while (!x.jel_prazna())
			{
				x.ukloni_sa_pocetka();
			}
			break;
		default:
			break;
		}
	} while (u != 7);
	cin.get();
}