// 17 pavyzdys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  // 17_cpp.cpp 
using namespace	std;

int main()
{
	struct studentas   // studento "strukturos" suk�rimas 
	{
		int	eil_nr;
		char pavarde[20];
		int kursas;
		float vidurkis;
	};
	studentas vartotojas1,  // pirmas vartotojas, 
		vartotojas2;   // antras vartotojas, 

	cout << "IVESKITE studento eil�s numer� (sveikasis skai�ius) ";
	cin >> vartotojas1.eil_nr;

	cout << "IVESKITE studento pavard� (iki 20 simboli�) ";
	cin >> vartotojas1.pavarde;

	cout << "IVESKITE kurs�, kuriame mokosi studentas (sveikasis skai�ius) ";
	cin >> vartotojas1.kursas;

	cout << "IVESKITE studento vidurk� (realus skai�ius) ";
	cin >> vartotojas1.vidurkis;

	vartotojas2 = vartotojas1;
	// reiksmiu spausdinimas  

	cout << endl << endl << "VARTOTOJAS2 reiksmes" << endl << endl;
	cout << vartotojas2.eil_nr << endl;
	cout << vartotojas2.pavarde << endl;
	cout << vartotojas2.kursas << endl;
	cout << vartotojas2.vidurkis << endl;
	system("pause");
	return 0;
}

