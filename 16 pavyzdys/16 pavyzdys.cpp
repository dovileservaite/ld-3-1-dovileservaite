// 16 pavyzdys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  // 16_cpp.cpp 
using namespace	std;

int main()
{
	struct studentas  // studento "strukturos" suk�rimas 
	{
		int	eil_nr;
		char pavarde[20];
		int	kursas;
		float vidurkis;
	};
	studentas vartotojas;  // sukurimas kintamasis vartotojas, 
						   // kuris bus studento duomen� tipo 
	cout << "IVESKITE studento eil�s numer� (sveikasis skai�ius) ";
	cin >> vartotojas.eil_nr;

	cout << "IVESKITE studento pavard� (iki 20 simboli�) ";
	cin >> vartotojas.pavarde;

	cout << "IVESKITE kurs�, kuriame mokosi studentas (sveikasis skai�ius) ";
	cin >> vartotojas.kursas;

	cout << "IVESKITE studento vidurk� (realus skai�ius) ";
	cin >> vartotojas.vidurkis;

	// reiksmiu spausdinimas 
	cout << endl << endl << "IVESTOS REIKSMES " << endl << endl;
	cout << vartotojas.eil_nr << endl;
	cout << vartotojas.pavarde << endl;
	cout << vartotojas.kursas << endl;
	cout << vartotojas.vidurkis << endl;

	system("pause");
	return 0;
}

