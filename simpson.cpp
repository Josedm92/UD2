//EBucle do while que simula un castigo en el que Bart Simpson debe escribir una frase 10 veces en la pizarra.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	int castigo=1; //Declaración e inicialización de variables.
	
	do { //Bucle que repite una frase 10 veces.
		cout << castigo << ". No organizaré mis propios simulacros de incendio" << endl; //Sacamos las frase por pantalla.
		castigo=castigo+1; //Incrementamos en 1 el valor de la variable castigo.
	} while (castigo <=10); //Comprobamos si castigo es menor o igual que 10, en caso afirmativo se repite el bucle.
}
