// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	char dscto;
	double p, precio;
	cout << "Tipo de pizza[1, 2, 3]: ";
	cin >> dscto;
	cout << "Precio sin descuento: ";
	cin >> p;
	if (dscto == '1')
	{
		precio = p - (p * 10 / 100);
	}
	if (dscto == '2')
	{
		precio = p - (p * 15 / 100);
	}
	if (dscto == '3')
	{
		precio = p - (p * 20 / 100);
	}
	cout << "Total a pagar:\n";
	cout << "S/" << precio << endl;
	system("pause");
    return 0;
}

