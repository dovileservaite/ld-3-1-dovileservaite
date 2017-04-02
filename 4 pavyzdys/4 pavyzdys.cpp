// 4 pavyzdys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>    //04_cpp.cpp
using namespace	std;

int main()
{
	int kintamasis = 24;    /* kinamajam priskiriama reiksme = 24 */
	int *rodykle;          // deklaruojamas kintamasis rodykle 
				           //  dar sakoma "rodykle á ..."  kintamasis
	rodykle = &kintamasis;   // rodykle atsimena kintamojo adresà
	
	cout << "Kintamojo reikðm÷ " << rodykle << endl;

	system("pause");
	return
		0;
}
