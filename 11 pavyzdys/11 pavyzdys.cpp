// 11 pavyzdys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  // 11_cpp.cpp 
using namespace	std;

int main()
{
	int	i;
	int	sk[] = { 10, 20, 30, 40, 50 };// !!! 
	int	*p;
	p = sk;
	for (i = 0; i < 5; i++)
		cout << *p++ << endl;   // spausdiname rodykl÷s rodomà reikðmæ  
							   // ir pereiname prie tolimesnio elemento
	system("pause");
	return	0;
}

