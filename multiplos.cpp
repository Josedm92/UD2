//Programa que calcula los múltiplos de un número en un intervalo determinado.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	int numero=0, multiplo=0, inicio=0, fin=0; //Declaración e inicialización de variables.
	
	//Pedimos el número y lo almacenamos en su variable.
	cout << "introduzca el número del que se quieren averiguar los mútliplos: " << endl;
	cin >> numero;
	//Pedimos el inicio y el fin del intervalo de búsqueda y almacenamos los valores en sus variables correspondientes.
	cout << "Introduzca el inicio del intervalo de búsqueda: " << endl;
	cin >> inicio;
	cout << "Introduzca el final del intervalo de búsqueda: " << endl;
	cin >> fin;
	
	//Bucle que va desde el inicio hasta el fin del intervalo introducido.
	for (multiplo=inicio; multiplo<=fin; multiplo++) {
		if (multiplo%numero==0) { //Comprobamos si el multiplo actual es múltiplo del número introducido
			cout << multiplo << " es múltiplo de " << numero << endl; //En caso afirmativo indicamos que es mútiplo.
		}
		else {
			cout << multiplo << " no es múltiplo de " << numero << endl; //En caso contrario indicamos que no lo es.
		}
	}
}
