// 15 pavyzdys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> // 15_cpp.cpp 
using namespace	std;

int main()
{
	int	*masyvas[4];/* Rodykliø masyvas */
	int	i = 10, j = 20, k = 30, l = 40;
	int	m;
	masyvas[0] = &i;
	masyvas[1] = &j;
	masyvas[2] = &k;
	masyvas[3] = &l;
	for (m = 0; m <= 3; m++)
		cout << *(masyvas[m]) << endl;

	system("pause");
	return 0;
}

