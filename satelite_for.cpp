//Ejemplo de bucle for con un satélite.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	for (int dato; dato>=0;) { //Declaración e inicialización de variable e inicio del bucle.
		cin >> dato; //Almacena un dato introducido por pantalla
		cout << "Recibido: " << dato << endl; //Muestra por pantalla el dato introducido.
	}
	cout << "Fin de la transmisión" << endl; //Saca por pantalla un mensaje indicando que finaliza el programa.
}
