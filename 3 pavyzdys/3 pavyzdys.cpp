// 3 pavyzdys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  //03_cpp.cpp
using namespace std;

int main()
{
	int kintamasis = 24;  // kinamajam priskiriama reiksme = 24 */ 
	int *rodykle;    // deklaruojamas kintamasis rodykle  
					 //  dar sakoma: "rodykle á ..."  
	rodykle = &kintamasis;   // rodykle atsimena kintamojo adresà 
							   // rodykl÷ rodo á kintamojo adresà 
	cout << "Kintamojo reikðm÷ " << *rodykle << endl;
	// spausdiname rodykl÷s rodomo kintamojo adreso saugoma reikðme  
	// Ásid÷m÷kite, kad rodykl÷s reikðm÷ :*p
	system("pause");

	return 0;
}
