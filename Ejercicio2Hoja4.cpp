#include <iostream>
using namespace std;

int Ejercicio2() {
	//Entrada

	char sexo[20];
	char hombre[20] = "h";
	char mujer[20] = "m";
	int precio;
	int edad;

	cout << "Ingrese sexo h o m : ";
	cin >> sexo;
	cout << "Ingrese edad: ";
	cin >> edad;

	//Logica
	if (sexo[20] == hombre[20] && edad < 25)
	{
		precio = 1000;
	}
	else if (sexo[20] == hombre[20] && edad >= 25)
	{
		precio = 700;
	}
	if (sexo[20] == mujer[20] && edad < 21)
	{
		precio = 800;
	}
	else if (sexo[20] == mujer[20] && edad >= 21)
	{
		precio = 500;
	}


	cout << "Pago: " << precio << endl;



	system("pause");
	return 0;

}