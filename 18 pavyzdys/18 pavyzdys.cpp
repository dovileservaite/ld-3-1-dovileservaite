// 18 pavyzdys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  // 18_cpp.cpp 
using namespace	std;

int main()
{
	struct asmuo  // asmuo "strukturos" suk�rimas 
	{
		int	eil_nr;
		char pavarde[20];
		int	kursas;
		float vidurkis;
	};
	asmuo studentas[10];   // sukuriamas kintamasis studentas 
						   // kur� sudaro 10 asmen� 
	int	i;
	int	n;
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

		cout << "IVESKITE " << i + 1 << " studento vidurk� (realus skai�ius) ";
		cin >> studentas[i].vidurkis;
		cout << endl;
	}
	// reiksmiu spausdinimas 
	cout << endl << endl << "Masyvo reik�m�s " << endl << endl;
	for (i = 0; i < n; i++)
	{
		cout << studentas[i].eil_nr << "  ";
		cout << studentas[i].pavarde << "  ";
		cout << studentas[i].kursas << "  ";
		cout << studentas[i].vidurkis << endl;
	}
	system("pause");
	return 0;
}

