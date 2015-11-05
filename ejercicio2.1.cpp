//Ejercicio 2.1 de la pagina 50.
#include <iostream> //Incluimos libreria iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Declaración e inicialización de variables.
double numero1=0.0; 
double numero2=0.0; 
double numeromayor=0.0; 

//Inicio del programa.
int main () {
	cout << "Introduzca un número: " << endl; //Pedimos por pantalla el primer número.
	cin  >> numero1; //Almacenamos el primer número en su variable correspondiente.
	cout << "Introduzca otro número: " << endl; //Pedimos por pantalla el segundo número.
	cin  >> numero2; //Almacenamos el segundo número en su variable correspondiente.
	if (numero1>numero2) {
		numeromayor=numero1; //En caso de que el número mayor sea el primero, asignamos su valor a la variable numeromayor.
	}	
	else {
		numeromayor=numero2; //En el caso contrario, asignamos el valor de numero2 a la variable numeromayor.
	}
	if (numero1==numero2) {
		cout << "Los números son iguales" << endl; //Comprobamos si los números son iguales, en caso afirmativo avisaremos al usuario.
	}
	else {
		cout << "El número mayor es: " << numeromayor << endl; //Si los números no son iguales sacamos por pantalla cuál es el mayor.
	}
} //Fin del programa
