//Programa que calcula si un número es un cuadrado perfecto.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
#include <cmath> //Incluimos librería cmath para poder usar pow.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	int numero=0, cuadrado=0, i=0; //Declaración e inicialización de variables.
	
	//Pedimos un número por pantalla y lo almacenamos en su variable.
	cout << "Introduzca un número: ";
	cin >> numero;
	
	//Calculamos los cuadrados desde 0 hasta que uno sea mayor o igual que el número introducido.
	for (i=0; cuadrado<numero; i++) {
		cuadrado=pow(i,2);
	}
	
	//Comprobamos si el último cuadrado calculado es igual al número introducido e indicamos el resultado.
	if (cuadrado==numero) {
		cout << "El número " << numero << " es el cuadrado perfecto de: " << i-1 << endl;
	} else {
		cout << "El número " << numero << " no es un cuadrado perfecto" << endl;
	}
}
