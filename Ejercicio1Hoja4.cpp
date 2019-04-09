#include <iostream>
using namespace std;

int ejercicio1() {
	//Entrada
	int precio;
	int cantidad;
	int monto;

	cout << "Ingrese cantidad de neumaticos: ";
	cin >> cantidad;
	/*Test
	cantidad=2
	monto= 290
	cantidad=4
	monto=552
	*/
	//Logica
	if (cantidad < 3)
	{
		precio = 145;
	}
	else if (cantidad >= 3 && cantidad <= 5)
	{
		precio = 138;
	}
	else {
		precio = 135;
	}
	monto = cantidad * precio;
	//Salida
	cout << "Monto total a pagar: " << monto;
	cout << " por " << cantidad << " neumaticos";

	system("pause");
	return 0;

}