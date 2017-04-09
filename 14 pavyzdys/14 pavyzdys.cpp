// 14 pavyzdys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  // 14_cpp.cpp 
using namespace	std;

int main()
{
	char *savaites_diena[7] = { "Pirmadienis","Antradienis","Treciadienis",
		"Ketvirtadienis","Penktadienis","Sestadienis","Sekmadienis" };
	int	i;
	for (i = 0; i < 7; i++)
		cout << savaites_diena[i] << endl;

	system("pause"); 
	return 0;
}

