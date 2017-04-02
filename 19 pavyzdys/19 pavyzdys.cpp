// 19 pavyzdys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  // 19_cpp.cpp 
using namespace	std;

int main()
{
	struct	asmuo	// asmuo "strukturos" sukûrimas 
	{
		int	eil_nr;
		char pavarde[20];
		int	kursas;
		int pazymys[5];  // vienmatis masyvas, kuriame gali bûti árağytos 5 reikğm÷s
	};
	asmuo studentas[10];   // sukuriamas kintamasis studentas 
						   // kurá sudaro 10 asmenø 
	int i, j;
	int n;
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

		cout << "IVESKITE " << i + 1 << " studento paşymius (sveikasis skaièius) ";

		for (j = 0; j < 5; j++)
		{
			cout << "Iveskite " << j + 1 << "-ta pazymi ";
			cin >> studentas[i].pazymys[j];
		}
		cout << endl;
	}
	// reiksmiu spausdinimas 
	cout << endl << endl << "Grup÷je ğie studentai: " << endl << endl;

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

