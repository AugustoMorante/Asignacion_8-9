#include <iostream>

using namespace std;

int ejercicio4() {
	//Entrada
	int horas;

	int salario;
	int horasextras;
	/*Test
	horas=45
	*/
	cout << "Ingrese cantidad de horas trabajadas: ";
	cin >> horas;
	//Logica
	if (horas <= 40)
	{
		salario = horas * 16;
		cout << "El salario semanal es: " << salario << endl;
	}
	else if (horas > 40)
	{
		horasextras = horas - 40;
		horas = horas - horasextras;
		salario = (horasextras * 20) + (horas * 16);
		cout << "El salario semanal es: " << salario << endl;
	}

	system("pause");
	return 0;

}