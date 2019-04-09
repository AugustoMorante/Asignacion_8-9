#include <iostream>
using namespace std;

int Ejercicio3Hoja5() {
	double x;
	double y;

	cout << "Ingrese X " << endl;
	cin >> x;
	cout << "Ingrese Y " << endl;
	cin >> y;

	if (x>0 && y>0)
	{
		cout << "Se encuentra en el Primer Cuadrante" << endl;
	}
	else if (y>0 && x<0)
	{
		cout << "Se encuentra en el Segundo Cuadrante" << endl;
	}
	else if (x<0 && y<0)
	{
		cout << "Se encuentra en el Tercer Cuadrante" << endl;
	}
	else {
		cout << "Se encuentra en el Cuarto Cuadrante" << endl;
	}
	system("pause");
	return 0;
}