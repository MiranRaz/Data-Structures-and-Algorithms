
#include <iostream>
#include "ListaSekv.h"
#include "ListaPov.h"

#include "Lista.h"
#include "Stek.h"
#include "Red.h"
#include "StekSekv.h"
#include "StekPov.h"
#include <vector>
#include "RedSekv.h"
using namespace std;




void ListaOperacije(Lista<int>& x)
{
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
			x.print();
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


}


void StekOperacije(Stek<int>& x)
{
	int u;
	do
	{
		cout << "========STEK=========" << endl << endl;
		cout << "1.	Dodaj na vrh" << endl;
		cout << "2.	Ukloni sa vrha" << endl;
		cout << "3.	Print" << endl;
		cout << "4.	Sve ukloni" << endl;
		cout << "0.	Exit" << endl;
		cin >> u;
		int b;
		switch (u)
		{
		case 1:
			cout << "Unesite broj: ";
			cin >> b;
			x.dodaj(b);
			break;
		case 2:
			b = x.ukloni();
			cout << "Uklonjeno sa vrha " << b << endl;
			break;
		case 3:
			x.print();
			break;
		case 4:
			while (!x.jel_prazna())
			{
				b = x.ukloni();
				cout << "Uklonjeno sa vrha " << b << endl;
			}
			break;
		default:
			break;
		}
	} while (u != 0);


}


void RedOperacije(Red<int>& x)
{
	int u;
	do
	{
		cout << "========RED=========" << endl << endl;
		cout << "1.	Dodaj u red" << endl;
		cout << "2.	Ukloniiz reda" << endl;
		cout << "3.	Print" << endl;
		cout << "4.	Sve ukloni" << endl;
		cout << "0.	Exit" << endl;
		cin >> u;
		int b;
		switch (u)
		{
		case 1:
			cout << "Unesite broj: ";
			cin >> b;
			x.dodaj(b);
			break;
		case 2:
			b = x.ukloni();
			cout << "Uklonjeno iz reda " << b << endl;
			break;
		case 3:
			x.print();
			break;
		case 4:
			while (!x.jel_prazan())
			{
				b = x.ukloni();
				cout << "Uklonjeno siz reda " << b << endl;
			}
			break;
		default:
			break;
		}
	} while (u != 0);


}
void main()
{
	//ListaSekv<int> x;
	//ListaPov<int> y;
	//ListaOperacije(x);
	//ListaOperacije(y);

	//StekPov<int> s1;
	//StekOperacije(s1);
	//StekSekv<int> s2;
	//StekOperacije(s2);


	RedSekv<int> r1;
	RedOperacije(r1);
}
