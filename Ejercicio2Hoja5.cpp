#include <iostream>

using namespace std;

int Hoja5ejercicio2() {
	//Entrada
	int numero;

	cout << "Ingrese mes en numero ";
	cin >> numero;
	//Logica 
	if (numero == 2)
	{
		cout << "El mes " << numero << " tiene 28 dias" << endl;
	}
	else if (numero == 4 || numero == 6 || numero == 9 || numero == 11)
	{
		cout << "El mes " << numero << " tiene 30 dias" << endl;
	}
	else
	{
		cout << "El mes " << numero << " tiene 31 dias" << endl;
	}
	system("pause");

	return 0;

}
