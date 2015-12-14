//Programa que indica si un número es primo.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	int numero=0, divisor=2; //Declaración e inicialización de variables.
	bool primo=true;
	
	do {
		cout << "Introduzca un número: "; //Pedimos un número por pantalla.
		cin >> numero; //Almacenamos el número en su variable.
		if (numero<=2) { //Comprobamos si el número es menor o igual que 2, en caso afirmativo lo indicamos.
			cout << "Introduzca un número mayor que 2" << endl;
		}
	} while (numero<=2); //Comprobamos si el número es menor o igual que 2, en caso afirmativo se repite el bucle.
	
	for (divisor=2; divisor<=(numero/2) && primo==true; divisor++) { //Calculamos la división del número desde entre 2 hasta su mitad.
		if (numero%divisor==0) { //Comprobamos el módulo vale 0, en ese caso el número no es primo y termina el bucle.
			cout << "El número no es primo" << endl;
			primo=false;
		}
	}
	
	//Al acabar el bucle, comprobamos si el módulo es distinto de 0, en ese caso indicamos que el número es primo.
	if (primo==true) { 
		cout << "El número es primo" << endl;
	}
}
