#include <iostream>

using namespace std;

int ejercicio3() {
	//Entrada
	double diametro;
	int ingredientes;
	double costo;
	/*Test
	diametro=20
	ingredientes=2
	costo=35
	*/
	cout << "Ingrese el diametro de la pizza en centimetros: ";
	cin >> diametro;
	cout << "Ingrese la cantidad de ingredientes extras: ";
	cin >> ingredientes;
	//Logica
	costo = (diametro*1.5) + (ingredientes*2.5);
	//Salida
	cout << "El precipo de la pizza es: " << costo << endl;

	system("pause");
	return 0;

}