//Ejercicio 2.2 de la pagina 50.
#include <iostream> //Incluimos libreria iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Declaración e inicialización de variables.
int numero=0; 

//Inicio del programa.
int main () {
	cout << "Introduzca un número: " << endl; //Pedimos por pantalla el número.
	cin  >> numero; //Almacenamos el número en su variable correspondiente.
	if (numero==0) {
		cout << "El número introducido es 0, no seas troll." << endl;
	}
	else {
		if (numero%2==0) { //Comprobamos el si modulo de la división del número introducido entre 2 da como resultado 0.
		cout << "el número introducido (" << numero << ") es par." << endl; //En caso afirmativo el número es par, sacamos por pantalla esta información.
		}
		else {
		cout << "el número introducido (" << numero << ") es impar." << endl; //En el caso contrario el número es impar, sacamos por pantalla esta información.
		}
	}
	
} //Fin del programa
