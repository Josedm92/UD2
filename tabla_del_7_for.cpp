//Bucle for de la tabla de multiplicar del número 7.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	for (int multiplicador=1; multiplicador<=10; multiplicador++) { //Declaración e inicialización de variable e inicio del bucle.
		cout << "7 x " << multiplicador << " = " << 7*multiplicador << endl; //Sacamos por pantalla el resultado de 7*multiplicador.
	}
}
