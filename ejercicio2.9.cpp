//Ejercicio 2.9 de la página 54.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	double nota=0.0; //Declaramos e inicializamos la variable.

	cout << "Introduce la nota obtenida: " << endl; //Pedimos por pantalla la nota.
	cin >> nota; //Almacenamos el valor en su variable.

	if (nota<5 && nota>=0) { //Comprobamos si la nota se encuentra entre 0 y 5.
		cout << "Suspenso." << endl; //En caso afirmativo sacamos por pantalla Suspenso.
	}
	else { //En caso negativo seguimos con las comprobaciones.
		if (nota>=5 && nota<7) { //Comprobamos si la nota se encuentra entre 5 y 7.
			cout << "Aprobado." << endl; //En caso afirmativo sacamos por pantalla Aprobado.
		}
		else { //En caso negativo seguimos con las comprobaciones.
			if (nota>=7 && nota<9) { //Comprobamos si la nota se encuentra entre 7 y 9.
				cout << "Notable." << endl; //En caso afirmativo sacamos por pantalla Notable.
			}
			else { //En caso negativo seguimos con las comprobaciones.
				if (nota>=9 && nota<=10) { //Comprobamos si la nota se encuentra entre 9 y 10.
					cout << "Sobresaliente." << endl; //En caso afirmativo sacamos por pantalla Sobresaliente.
				}
				else { //En caso contrario determinamos que la nota introducida no se encuentra entre 0 y 10, y por tanto, no es válida.
					cout << "Debe introducir una nota entre 0 y 10." << endl; //Avisamos al usuario sobre el problema.
				}
			}
		}
	}
} //Fin del programa.
