// 7 pavyzdys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  // 07_cpp.cpp 
using namespace std;

int main()
{
	int a;  // kintamas a  - sveikasis sk. 
	int *p; 	  // kintamasis p - rodykl÷ 
	a = 99;
	p = &a;   /* rodykle p rodo  i kint. a adresà */

	//     Aritmetinis veiksmas 
	*p++;    // padidinama rodykl÷s rodomas adresas 

	cout << "Rodykles *p rodomas turinys " << *p << endl;
	// spausdinama kintamojo a reiksm÷  
	 // jokiu bûdu ne p* 
	system("pause");
	return	0;
}

