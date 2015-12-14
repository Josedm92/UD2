//Ejercicio 3.13 de la página 89 - Programa que calcula los cubos de los números naturales con el método de Nicómano.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	//Declaración e inicialización de las variables.
	int i=0,meta=0,cubo=0,acumulador=0,control=0;
	
	//Bucle que se repita hasta que se introduzca un número mayor que 0.
	do {
		//Pedimos por pantalla el número hasta el que se quieren calcular los cubos.
		cout << "Introduzca hasta que número desea calcular los cubos: ";
		cin >> meta;
		if (meta<1) {
			cout << "debe introducir un número mayor que 0" << endl; //Mensaje de error si el número es menor que 1.
		}
	} while(meta<1);
	
	//Bucle que saca los cubos desde el 1 hasta el número introducido
	for (i=1; i<=meta; i++) {
		cubo=0;
		//Bucle que comprueba si el número del acumulador es impar y lo suma a la variable del cubo del número actual.
		for (control=1; control<=i; acumulador++) {
			if (acumulador%2==1) {
				cubo+=acumulador;
				control++;
			}
		}
		cout << "El cubo de " << i << " es: " << cubo << endl; //Sacamos por pantalla el cubo del número actual.
	}
}
