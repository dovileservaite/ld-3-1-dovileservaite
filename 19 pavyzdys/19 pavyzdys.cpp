// 19 pavyzdys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  // 19_cpp.cpp 
using namespace	std;

int main()
{
	struct	asmuo	// asmuo "strukturos" suk�rimas 
	{
		int	eil_nr;
		char pavarde[20];
		int	kursas;
		int pazymys[5];  // vienmatis masyvas, kuriame gali b�ti �ra�ytos 5 reik�m�s
	};
	asmuo studentas[10];   // sukuriamas kintamasis studentas 
						   // kur� sudaro 10 asmen� 
	int i, j;
	int n;
	cout << "Kiek grupeje studentu? ";
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cout << "IVESKITE " << i + 1 << " studento numer� (sveikasis skai�ius) ";
		cin >> studentas[i].eil_nr;

		cout << "IVESKITE " << i + 1 << " studento pavard� (iki 20 simboli�) ";
		cin >> studentas[i].pavarde;

		cout << "IVESKITE " << i + 1 << " studento kurs�, kuriame jis mokosi(sveikasis skai�ius) ";
		cin >> studentas[i].kursas;

		cout << "IVESKITE " << i + 1 << " studento pa�ymius (sveikasis skai�ius) ";

		for (j = 0; j < 5; j++)
		{
			cout << "Iveskite " << j + 1 << "-ta pazymi ";
			cin >> studentas[i].pazymys[j];
		}
		cout << endl;
	}
	// reiksmiu spausdinimas 
	cout << endl << endl << "Grup�je �ie studentai: " << endl << endl;

	for (i = 0; i < n; i++)
	{
		cout << studentas[i].eil_nr << "  ";
		cout << studentas[i].pavarde << "  ";
		cout << studentas[i].kursas << "  ";

		for (j = 0; j < 5; j++)
			cout << studentas[i].pazymys[j] << "  " << endl;
	}
	system("pause");
	return 0;
}

