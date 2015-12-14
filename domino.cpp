//Programa que saca por pantalla todas las fichas de un dominó.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	//Declaración e inicialización de variables.
	int acumulador=0, ficha=1;
	
	//Bucle que saca todas las fichas del dominó.
	for (int i=0; i<=6; i++) {
		for (int j=acumulador; j<=6; j++){ //Bucle que saca las combinaciones de cada ficha.
			cout << "Ficha " << ficha << ": " << i << " . " << j << endl; //Sacamos la ficha por pantalla.
			ficha++;
		}
		acumulador++; //Se incrementa el acumulador para evitar que se repitan fichas.
	}
}
