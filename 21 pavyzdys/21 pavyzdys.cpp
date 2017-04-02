// 21 pavyzdys.cpp : Defines the entry point for the console application.
/// SUSIETAS SÀRAÐAS /

#include "stdafx.h"
#include <iostream> // 21_cpp.cpp 
using namespace	std;
struct sarasas {
	int	skaicius;
	sarasas* tolimesnis;
	int	skaicius2;
	int	skaicius3;
	int	skaicius4;
};
//=============================================== prototypes
void naikink(sarasas* kazkas);  // saraso elem. trynimas 
void spausdink(sarasas* pradzia);  // saraso elem. spausdinimas 
sarasas* formuok(istream& ivestis);  // saraso elem. formavimas 

int main() {
	sarasas* sar1;
	cout << "Iveskite skaicius ";
	cout << "pabaigoje paspauskite bet kokià raidæ " << endl;
	sar1 = formuok(cin);  // sàraðo formavimas ið CIN (ekrano) 
	cout << endl;
	spausdink(sar1);     // spausdiname sàraðo elementus 
	naikink(sar1);     // triname sàraðo elementus 
	system("pause");
	return  0;
}
//=============================================== spausdink

void spausdink(sarasas* pradzia)
{
	for (; pradzia != NULL; pradzia = pradzia->tolimesnis) {
		cout << pradzia -> skaicius << " ";  // spausdiname skaicius lauko reikðmæ 
	}
	cout << endl;
}
//=============================================== formuok

sarasas* formuok(istream& ivestis) {
	sarasas* pradzia = NULL;   // rodykle i pirma elementa 
	sarasas* pabaiga = NULL;   // rodykle i paskutini elementa 
	int	x;

	while
		(ivestis >> x) {
		sarasas* naujas = new sarasas();
		naujas->skaicius = x;   //  skaicius lauko reiksme 
		naujas->tolimesnis = NULL;   // tolimesnis lauko reiksme 

		if (pradzia == NULL) {   // jeigu tai pirmasis elementas 
			pradzia = naujas;    // pradþia ir pabaiga sutampa. 
			pabaiga = naujas;
		}
		else
		{
			pabaiga->tolimesnis = naujas;  // paskutinis rodykl÷ rodo á tolimesná 
		}
		pabaiga = naujas;    // rodykle naujas rodo á pabaigà 
	}
	return pradzia;
}
//end formuok 

void naikink(sarasas* kazkas) {
	sarasas* laikinas;

	for (sarasas* kuris = kazkas; kuris != NULL; kuris = laikinas) {
		laikinas = kuris->tolimesnis;// prieð iðtrinime pakopijuojame reikðmes 
		delete kuris;
	}
}

