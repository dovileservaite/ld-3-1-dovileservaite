// 10 pavyzdys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> // 10_cpp.cpp 
using namespace	std;

int main()
{
	int	i;
	int	sk[5] = { 10, 20, 30, 40, 50 };
	int	*p;
	p = sk;     // rodykl� rodo � pirm� masyvo element� 
	for (i = 0; i < 5; i++)
		cout << *(p + i) << endl;   //kas �ia ? ? ?
	system("pause");
	return	0;
}

