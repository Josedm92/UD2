//Programa que simula un movimiento en el Ajedrez.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	//Declaración e inicialización de variables.
	int  inicialx=0, inicialy=0, objetivox=0, objetivoy=0, tipo=0;
	bool validotorre=false, validoreina=false;
	
	//Pedimos por pantalla la posición inicial de la ficha.
	cout << "Introduce posición de la ficha: " << endl;
	while (inicialx<1 || inicialx>8) { //Comprobamos que la ficha está dentro del tablero.
		cout << "Horizontal (1-8): ";
		cin >> inicialx;
		if (inicialx<1 || inicialx>8) {
			cout << "Introduzca un valor entre 1 y 8" << endl;
		}
	}
	while (inicialy<1 || inicialy>8) { //Comprobamos que la ficha está dentro del tablero.
		cout << "Vertical (1-8): ";
		cin >> inicialy;
		if (inicialy<1 || inicialy>8) {
			cout << "Introduzca un valor entre 1 y 8" << endl;
		}
	}
	
	//Pedimos por pantalla el destino del movimiento.
	cout << "Introduce destino del movimiento: " << endl;
	while (objetivox<1 || objetivox>8) { //Comprobamos que el movimiento está dentro del tablero.
		cout << "Horizontal (1-8): ";
		cin >> objetivox;
		if (objetivox<1 || objetivox>8) {
			cout << "Introduzca un valor entre 1 y 8" << endl;
		}
	}
	while (objetivoy<1 || objetivoy>8) { //Comprobamos que el movimiento está dentro del tablero.
		cout << "Vertical (1-8): ";
		cin >> objetivoy;
		if (objetivoy<1 || objetivoy>8) {
			cout << "Introduzca un valor entre 1 y 8" << endl;
		}
	}
	
	//Comprobamos que el movimiento sea en horizontal o vertical y, por tanto, válido para la torre y la reina.
	if (objetivox==inicialx || objetivoy==inicialy) {
		validotorre=true;
		validoreina=true;
	} else { //En caso contrario comprobamos si el movimiento es en diagonal y, por tanto, válido para la reina.
		for (int i=1; i<8 && validoreina==false; i++) {
			if (objetivox+i==inicialx&&objetivoy+i==inicialy) {
				validoreina=true;
			}
			if (objetivox+i==inicialx&&objetivoy-i==inicialy) {
				validoreina=true;
			}
			if (objetivox-i==inicialx&&objetivoy+i==inicialy) {
				validoreina=true;
			}
			if (objetivox-i==inicialx&&objetivoy-i==inicialy) {
				validoreina=true;
			}
		}
	}
	
	//Sacamos por pantalla el resultado obtenido de las comprobaciones.
	if (validotorre==true) {
		cout << "Es un movimiento válido para la torre" << endl;
	} else {
		cout << "No es un movimiento válido para la torre" << endl;
	}
	if (validoreina==true) {
		cout << "Es un movimiento válido para la reina" << endl;
	} else {
		cout << "No es un movimiento válido para la reina" << endl;
	}
}
