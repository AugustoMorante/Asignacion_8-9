#include <iostream>

using namespace std;

int ejercicio5() {
	//Entrada
	int cantidad;
	double precio;
	double total;

	cout << "Ingrese la cantidad de unidades adquiridas: ";
	cin >> cantidad;
	cout << "Ingrese el precio del articulo:  ";
	cin >> precio;
	//Logica

	total = (cantidad*precio) + (cantidad*precio*0.18);

	//Salida
	cout << "Precio total a pagar con IGV incluido: " << total << endl;
	system("pause");
	return 0;

}