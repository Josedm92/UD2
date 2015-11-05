//Ejercicio 2.10 de la página 58.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	//Declaración e inicialización de variables.
	double numero1=0.0, numero2=0.0, resultado=0.0;
	char opcion='n';
	
	//Pedimos dos números por pantalla y los almacenamos en sus respectivas variables.
	cout << "Introduzca un número: " << endl;
	cin >> numero1;
	cout << "\nIntroduzca otro número: " << endl;
	cin >> numero2;
	
	//Pedimos al usuario que escoja una operación para realizar con dichos números (suma, resta, multiplicación o división).
	cout << "\n\nEscoja una opción: " << endl;
	cout << "\t(s) Sumar los números: " << endl;
	cout << "\t(r) Restar los números: " << endl;
	cout << "\t(m) Multiplicar los números: " << endl;
	cout << "\t(d) Dividir los números: " << endl;
	cin >> opcion;
	
	//Comprobamos el dato introducido.
	switch (opcion) {
		case 's':
		case 'S': //Si introduce s o S se hace la suma de los números y se saca el resultado por pantalla.
			resultado=numero1+numero2;
			cout << "La suma de " << numero1 << " y " << numero2 << " da como resultado: " << resultado << endl;
			break;
		case 'r':
		case 'R': //Si introduce r o R se hace la resta de los números y se saca el resultado por pantalla.
			resultado=numero1-numero2;
			cout << "La resta de " << numero1 << " y " << numero2 << " da como resultado: " << resultado << endl;
			break;
		case 'm':
		case 'M': //Si introduce m o M se hace la multiplicación de los números y se saca el resultado por pantalla.
			resultado=numero1*numero2;
			cout << "La multiplicación de " << numero1 << " y " << numero2 << " da como resultado: " << resultado << endl;
			break;
		case 'd':
		case 'D': //Si introduce d o D se hace la división de los números y se saca el resultado por pantalla.
			resultado=numero1/numero2;
			cout << "La división de " << numero1 << " y " << numero2 << " da como resultado: " << resultado << endl;
			break;
		default: //En caso de que no introduzca ninguna de las opciones anteriores, se finaliza el programa con un mensaje de error.
			cout << "Opción incorrecta." << endl;
	}
} //Fin del programa
