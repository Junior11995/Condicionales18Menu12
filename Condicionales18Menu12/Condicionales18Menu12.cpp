/*
* Ejercicio 12: Hacer un menú que considere las siguientes opciones:
  Caso 1: Cubo de un numero
  Caso 2: Numero par o impar
  Case 3: salir.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int cubo = 0;
	int reciduo = 0;

	int opciones;

	cout << "\tMenu: "<< endl; 
	cout << "\t1: Cubo de un numero: "<< endl;
	cout << "\t2: Numero par o impar :"<< endl;
	cout << "\t3: salir: "<< endl;
	
	cout << "\tDigite una de las Opciones: ";  cin >> opciones;

	switch (opciones)
	{
	case 1:
		cout << "Digite un Valor: "; cin >> cubo;
		cubo *= 3; 
		cout << "El cubo es " << cubo; break;
	case 2:
		cout << "Digite un Valor: "; cin >> cubo;
		reciduo = cubo % 2;
		if (reciduo) {
			cout << "El valor es un Impar: "; break;
		}
		else {
			cout << "El Numero es Par: ";
		}
		// cout << "El valor es " << cubo; break;
		break;
	case 3:break;
	default: cout << "Esta no es una Opcion valida Digite otra: "; cin >> opciones;   
	}
	_getch();
	return 0;
}