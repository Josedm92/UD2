//Programa que saca por pantalla las tablas de multiplicar del 1 al 10 con 10 entradas cada una.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	int numero=0, entradas=0;
	
	cout << "Inroduzca hasta qué número se mostrarán las tablas: ";
	cin >> numero;
	cout << "Inroduzca el número de entradas por cada tabla: ";
	cin >> entradas;
	
	//Bucle que saca las tablas de multiplicar los números del 1 al 10.
	for (int i=1; i<=numero; i++) {
		cout << "\nTabla del número " << i << endl;
		for (int j=1; j<=entradas; j++) { //Bucle que saca las 10 entradas de cada tabla de multiplicar.
			cout << i << " x " << j << " = " << i*j <<endl;
		}
	}
	
}
