// 3 pavyzdys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  //03_cpp.cpp
using namespace std;

int main()
{
	int kintamasis = 24;  // kinamajam priskiriama reiksme = 24 */ 
	int *rodykle;    // deklaruojamas kintamasis rodykle  
					 //  dar sakoma: "rodykle � ..."  
	rodykle = &kintamasis;   // rodykle atsimena kintamojo adres� 
							   // rodykl� rodo � kintamojo adres� 
	cout << "Kintamojo reik�m� " << *rodykle << endl;
	// spausdiname rodykl�s rodomo kintamojo adreso saugoma reik�me  
	// �sid�m�kite, kad rodykl�s reik�m� :*p
	system("pause");

	return 0;
}
