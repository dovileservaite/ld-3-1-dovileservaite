// 6 pavyzdys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  // 06_cpp.cpp 
using namespace	std;

int main()
{
	int a;  // kintamas a  9 sveikasis sk. 
	int *p; // kintamasis p 9 rodykl� 
	a = 99;
	p = &a;    /* rodykle p rodo  i kint. a adres� */

	//     Aritmetinis veiksmas 
	(*p)++;   // padidinama rodykles rodoma reik�m� VIENETU
		// �SIMINKITE SINTAKS�
	cout << "Rodykles *p rodomas turinys " << *p << endl;
	// spausdinama kintamojo a reiksme  
	// jokiu b�du ne p* 
	system("pause");
	return 0;
}
