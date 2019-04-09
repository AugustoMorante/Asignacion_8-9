#include <iostream>
using namespace std;
float modeloycolor(char modelo, char color) {
	return ((modelo == 'A')*(((color == 'B')*240.50) + (color == 'M')*330.00 + (color == 'O')*270.50)) +
		((modelo == 'B')*(((color == 'B')*300.00) + (color == 'M')*360.50 + (color == 'O')*330.00));
}

float imcremento(int edad) {
	return (edad < 31)*0.25 + (31 <= edad && edad <= 65) * 0 + (65 < edad)*0.1;
}

int main() {
	char modelo, color;
	int edad;
	float inc, pre;
	cout << "Ingresar modelo: ";
	cin >> modelo;
	cout << "Color: ";
	cin >> color;
	cout << "Edad: ";
	cin >> edad;

	inc = modeloycolor(modelo, color)*imcremento(edad);
	pre = modeloycolor(modelo, color) + inc;

	cout << "Precio del seguro: " << pre << endl;
	system("pause");
	return 0;
}