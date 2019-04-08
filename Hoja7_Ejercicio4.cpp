// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int impares(int i)
{
	int si;
	si = i;
	if (si % 2 == 0)
	{
		si = 0;
	}
	return si;
}

int digitos(int num)
{
	int d1, d2, d3, d4, r;
	d1 = num / 1000;
	d2 = (num / 100) % 10;
	d3 = (num / 10) % 10;
	d4 = num % 10;
	r = impares(d1) + impares(d2) + impares(d3) + impares(d4);
	return r;
}

int main()
{
	int valor, n;
	cout << "Insertar valor de 4 digitos\n";
	cin >> valor;
	n = digitos(valor);
	cout << n << endl;
	system("pause");
    return 0;
}

