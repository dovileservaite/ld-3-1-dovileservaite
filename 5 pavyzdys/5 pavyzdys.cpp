// 5 pavyzdys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  // 05_cpp.cpp
using namespace std;

int main()
{
	int a = 24, *p;    // kintamas a  9 sveikasis sk. 
					   // kintamasis p 9 rodykl� 
	p = &a;            /* rodykle p rodo  i kint. a adres� */

	//  kintamo a reiksme ir adresas 
	cout << "Kintamojo a reik�m� " << a << endl;
	cout << "Kintamojo a adresas " << &a << endl;
	cout << "----------------------------------------\n\n";

	//  naudojame rodykle p, keli variantai :
	cout << "rodykles  p reik�m� " << p << endl;
	cout << "rodykles  p adresas " << &p << endl;
	cout << "Rodykles *p rodomas turinys " << *p << endl;
	// PASTABA:   jokiu budu ne p* 

	system("pause");
	return 0;
}

