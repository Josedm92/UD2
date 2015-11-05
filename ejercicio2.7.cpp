//Ejercicio 2.7 de la página 54.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	double numero1=0.0, numero2=0.0, numero3=0.0, numeromayor=0.0; //Declaración e inicialización de variables.
	
	//Pedimos por pantalla tres números y los almacenamos en sus variables correspondientes.
	cout << "Introduzca un número: " << endl;
	cin >> numero1;
	cout << "Introduzca otro número: " << endl;
	cin >> numero2;
	cout << "Introduzca el último número: " << endl;
	cin >> numero3;

	if (numero1==numero2 || numero1==numero3 || numero2==numero3 ) {
		if (numero1==numero2) cout << numero1 << " y " << numero2 << " son iguales." << endl;
		if (numero1==numero3) cout << numero1 << " y " << numero3 << " son iguales." << endl;
		if (numero2==numero3) cout << numero2 << " y " << numero3 << " son iguales." << endl;
		cout << "Debe introducir tres números diferentes." <<endl;
	}
	else {
		if (numero1>numero2 && numero1>numero3) {
			numeromayor=numero1;
		}
		else {
			if (numero2>numero3) {
				numeromayor=numero2;
			}
			else {
				numeromayor=numero3;
			}
		}
		cout << "El número mayor de " << numero1 << ", " << numero2 << " y " << numero3 << " es: " << numeromayor << endl;
	}
} //Fin del programa
