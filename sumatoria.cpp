//Programa que calcula la sumatoria de un número.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	int numero=0, sumatoria=0, entero=0; //Declaración e inicialización de variables.
	
	//Pedimos un numero por pantalla y lo almacenamos en su variable correspondiente.
	cout << "Introduzca un número para sacar su sumatoria: ";
	cin >> numero;
	
	//Calculamos la sumatoria, para ello sumamos desde 1 hasta el número introducido.
	for (entero=1; entero<=numero; entero++) {
		sumatoria=sumatoria+entero;
	}
	cout << "El sumatoria de " << numero << " es " << sumatoria << endl; //Sacamos el resultado por pantalla.
}
