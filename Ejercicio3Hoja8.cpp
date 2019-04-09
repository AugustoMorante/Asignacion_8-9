#include <iostream>
using namespace std;
int sueldomensual(int s) {
	return (s < 1500) * 6 + (1500 <= s && s <= 6000) * 12 + (6000 < s) * 18;
}
int tipodevivienda(char tv) {
	return(tv == 'P') * 2 + (tv == 'A') * 5 + (tv == 'M') * 10;
}
int tarjetadecredito(char tc) {
	return(tc == 'N') * 0 + (tc == 'S') * 6;
}
int cargafamiliar(char tf) {
	return(tf == 'S') * 6 + (tf == 'N') * 3;
}
int main() {
	float s, p, suma;
	char tv, tc, tf;
	cout << "sueldo mensual: ";
	cin >> s;
	cout << "tipo de vivienda: ";
	cin >> tv;
	cout << "tarjeta de credito: ";
	cin >> tc;
	cout << "tiene carga familiar: ";
	cin >> tf;

	suma = sueldomensual(s) + tipodevivienda(tv) + tarjetadecredito(tc) + cargafamiliar(tf);
	cout << "Puntaje Obtenido: " << suma << endl;
	cout << "Se le otroga el prestamo: " << (suma < 20) * 0 + (20 <= suma) * 1 << endl;

	system("pause");
	return 0;
}
