// 13 pavyzdys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void spausdink(char *rodykle);

int main()
{
	char	str[] = "Sveiki!! Kaip veikia RODYKLES?";
	spausdink(str);
	cout << endl;

	system("pause");
	return	0;
}
void spausdink(char *rodykle)
{
	while (*rodykle)
		cout << *rodykle++; // spausdiname po vienà raidæ  
							 // nereikejo suþinoti masyvo ilgio !!! 
}
