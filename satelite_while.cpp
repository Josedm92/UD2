//Ejemplo de bucle While con un satélite.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	int dato=0; //Declaración de variables.
	
	while (dato>=0) { //Comprueba si dato es mayor o igual que 0, en caso afirmativo pide datos por pantalla.
		cin >> dato; //Almacena un dato introducido por pantalla
		cout << "Recibido: " << dato << endl; //Muestra por pantalla el dato introducido.
	}
	cout << "Fin de la transmisión." << endl; //Saca por pantalla un mensaje indicando que finaliza el programa.
}
