// 20 pavyzdys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  // 20_cpp.cpp 
using namespace	std;

int main()
{
	struct irasas {
		int	x;
		int	y;
	};
	//--- deklaruojame iraso tipo kintamuosius p1 ir p2
	irasas p1;
	irasas p2;

	p1.x = 12;      // pradin÷s reikðm÷s; 
	p1.y = 45;
	cout << " PRADINES reiksmes:  " << "p1.x= " << p1.x << "p1.y= " << p1.y << endl;
	// nario (lauko) pasiekiamas "tasko operatoriumi" 

	int h1 = p1.x;   // galima priskirti kintamajam 
	cout << " h1 reiksme:  " << h1 << endl;

	p2.y = p1.y;  // galima kopijuoti i kita struktura 
	cout << " p2.y =  " << p2.y << endl;
	cout << " ------     ------------          ----" << endl;

	// NAUDOJANT RODYKLÆ   --------------------------------

	irasas* rodykle;     // aprasome rodykle i irasa 
	rodykle = new irasas;    // !!! dinamiðkai sukuriam nauja rodykl÷ 
	rodykle->x = 12;     // laukams suteikimaos reikðm÷s 
	rodykle->y = 45;
	int h2 = rodykle->x;   // nauojant rodykles poperatoriu 
	int h3 = (*rodykle).x;  // tas pats kaip ir h2, tik naudojant taðko operatoriø
	cout << " h2 reikðm÷:  " << h2 << endl;
	cout << " h3 reikðm÷:  " << h3 << endl;
	cout << " rodykle -> x:  " << rodykle->x << endl;
	cout << " rodykle -> y:  " << rodykle->y << endl;

	system("pause");
	return 0;
}

