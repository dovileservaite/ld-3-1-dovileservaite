// 12 pavyzdys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  // 12_cpp.cpp 
using namespace	std;

int main()
{
	char  str1[] = "Pirma eilute";
	char *str2 = "Antra eilute";
	cout << "str1 " << str1 << endl;
	cout << "str2 " << str2 << endl;
	//     str1++;    // Neteisinga i�rai�ka   KOD�L
	//     cout << "str1++ " << str1 << endl;   

	str2++;  // Teisinga i�rai�ka, KODeL-  pakinta adresas
	cout << "str2++ " << str2 << endl;
	system("pause");
	return	0;
}
