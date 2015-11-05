//Bucle do while de la tabla de multiplicar del número introducido.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	int numero=0,multiplicador=1; //Delclaración e inicialización de variables.

	cout << "Introduzca un número para obtener su tabla de multiplicar: " ; //Pedimos por pantalla un número para sacar su tabla de multiplicar.
	cin >> numero; //Almacenamos el número introducido en su variable correspondiente.
	cout << "Tabla de multiplicar del número: " << numero << endl; //Sacamos por pantalla el título indicando de qué número vamos a sacar la tabla de multiplicar.
	
	do { //Bucle que saca la multiplicación del número introducido por pantalla 10 veces.
		cout << numero << " x " << multiplicador << " = " << numero*multiplicador << endl; //Sacamos por pantalla el resultado de numero*multiplicador.
		multiplicador=multiplicador+1; //Incrementamos en 1 el valor de multiplicador.
	} while (multiplicador<=10); //Comprobamos si multiplicador es menor o igual que 10, en caso afirmativo repetimos el bucle.
}
