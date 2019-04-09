#include <iostream>

using namespace std;

int Hoja5ejercicio1() {
	//Entrada
	int a;
	int b;
	int c;

	cout << "Ingrese lado 1: ";
	cin >> a;
	cout << "Ingrese lado 2: ";
	cin >> b;
	cout << "Ingrese lado 3: ";
	cin >> c;
	//Logica
	if (a == b && b == c)
	{
		cout << "Equilatero: V" << endl;
		cout << "Isosceles: F" << endl;
		cout << "Escaleno: F" << endl;
	}
	else if (a != b && b != c && a != c)
	{
		cout << "Equilatero: F" << endl;
		cout << "Isosceles: F" << endl;
		cout << "Escaleno: V" << endl;
	}
	else if (a == b && a != c || b == c && b != a || c == a && c != b)
	{
		cout << "Equilatero: F" << endl;
		cout << "Isosceles: V" << endl;
		cout << "Escaleno: F" << endl;
	}


	//Salida

	system("pause");
	return 0;

}