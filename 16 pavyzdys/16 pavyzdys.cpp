// 16 pavyzdys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  // 16_cpp.cpp 
using namespace	std;

int main()
{
	struct studentas  // studento "strukturos" sukûrimas 
	{
		int	eil_nr;
		char pavarde[20];
		int	kursas;
		float vidurkis;
	};
	studentas vartotojas;  // sukurimas kintamasis vartotojas, 
						   // kuris bus studento duomenø tipo 
	cout << "IVESKITE studento eil÷s numerá (sveikasis skaièius) ";
	cin >> vartotojas.eil_nr;

	cout << "IVESKITE studento pavardæ (iki 20 simboliø) ";
	cin >> vartotojas.pavarde;

	cout << "IVESKITE kursà, kuriame mokosi studentas (sveikasis skaièius) ";
	cin >> vartotojas.kursas;

	cout << "IVESKITE studento vidurká (realus skaièius) ";
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

