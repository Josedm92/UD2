//Bucle do while de la tabla de multiplicar del número 7.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	int multiplicador=1; //Delclaración e inicialización de variables.

	do { //Bucle que saca la multiplicación del número 7 por pantalla 10 veces.
		cout << "7 x " << multiplicador << " = " << 7*multiplicador << endl; //Sacamos por pantalla el resultado de 7*multiplicador.
		multiplicador=multiplicador+1; //Incrementamos en 1 el valor de multiplicador.
	} while (multiplicador<=10); //Comprobamos si multiplicador es menor o igual que 10, en caso afirmativo repetimos el bucle.
}
