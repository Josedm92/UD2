//Programa que calcula el factorial de un número.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	int numero=0, factorial=1, entero=0; //Declaración e inicialización de variables.
	
	//Pedimos un numero por pantalla y lo almacenamos en su variable correspondiente.
	cout << "Introduzca un número para sacar su factorial: ";
	cin >> numero;
	
	//Calculamos el factorial, para ello multiplicamos el número introducido por 1 hasta si mismo.
	for (entero=1; entero<=numero; entero++) {
		factorial=factorial*entero;
	}
	cout << "El factorial de " << numero << " es " << factorial << endl; //Sacamos el resultado por pantalla.
}
