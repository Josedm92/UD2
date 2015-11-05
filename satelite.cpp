//Ejemplo de bucle Do While con un satélite.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	int dato; //Declaración de variables.

	do { //Bucle que pide datos por pantalla hasta que se introduce un número negativo.
		cin >> dato; //Almacena un dato introducido por pantalla
		cout << "Recibido: " << dato << endl; //Muestra por pantalla el dato introducido.
	} while (dato >=0); //Comprueba si el dato es mayor o igual que 0, en caso positivo repite el bucle.
	cout << "Fin de la transmisión" << endl; //Saca por pantalla un mensaje indicando que finaliza el programa.
}
