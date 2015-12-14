//Ejercicio 3.13 de la página 84 - Programa que calcula el valor de e con una precisión establecida.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
#include <iomanip> //Incluimos librería iomanip para poder establecer la precisión en el cálculo de pi (setprecision).
using namespace std; //Sentencia obligatoria.

//Creación de la función para el factorial.
int factorial (int n) {
	int i;
	long double acu=1.0;
	for (i=2; i<=n; i++) {
		acu=acu*i;
	}
	
	return acu;
}

//Inicio del programa.
int main () {
	//Declaración e inicialización de variables.
	int precision; 
	long double valor=0.0;
	
	//Pedimos por pantalla el numero de sumandos que se quieran para calcular e.
	cout << "Introduzca el número de sumandos con los que se desea calcular e: ";
	cin >> precision;
	
	//Bucle que calcula el valor de e.
	for (int i=0; i<=precision; i++) {
		valor+=(1.0/factorial(i)); //Cálculo de e con los sumandos actuales.
		//Sacamos por pantalla el valor actual de e.
		cout << "Valor de e aproximado (" << i << "): " << setprecision(precision) << valor << endl;
	}
}
