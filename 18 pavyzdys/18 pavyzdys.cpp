// 18 pavyzdys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  // 18_cpp.cpp 
using namespace	std;

int main()
{
	struct asmuo  // asmuo "strukturos" sukûrimas 
	{
		int	eil_nr;
		char pavarde[20];
		int	kursas;
		float vidurkis;
	};
	asmuo studentas[10];   // sukuriamas kintamasis studentas 
						   // kurá sudaro 10 asmenø 
	int	i;
	int	n;
	cout << "Kiek grupeje studentu? ";
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cout << "IVESKITE " << i + 1 << " studento numerá (sveikasis skaièius) ";
		cin >> studentas[i].eil_nr;

		cout << "IVESKITE " << i + 1 << " studento pavardæ (iki 20 simboliø) ";
		cin >> studentas[i].pavarde;

		cout << "IVESKITE " << i + 1 << " studento kursà, kuriame jis mokosi(sveikasis skaièius) ";
		cin >> studentas[i].kursas;

		cout << "IVESKITE " << i + 1 << " studento vidurká (realus skaièius) ";
		cin >> studentas[i].vidurkis;
		cout << endl;
	}
	// reiksmiu spausdinimas  
	cout << endl << endl << "Masyvo reikğm÷s " << endl << endl;
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

