// 9 pavyzdys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  // 09_cpp.cpp 
using namespace  std;

int main()
{
	int	i;
	int	sk[5] = { 10, 20, 30, 40, 50 };
	for (i = 0; i < 5; i++)
		cout << *(sk + i) << endl;    // masyvo elementà spausdiname naudodami 
									// rodykl÷s rodomo adreso reikðmæ
	system("pause");
	return  0;
}

