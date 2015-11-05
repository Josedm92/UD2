//Ejercicio 2.4 de la pagina 51.
#include <iostream> //Incluimos libreria iostream que permite la entrada por teclado y la salida por pantalla.
#include <cmath> //Incluimos la librería cmath para poder usar la potencia.
using namespace std; //Sentencia obligatoria.

//Declaración e inicialización de variables.
double radio=0.0;
double pi=3.1416;
double area=0.0; 
double perimetro=0.0;

//Inicio del programa.
int main () {
	cout << "Introduzca el radio del círculo (en centímetros): " << endl; //Pedimos por pantalla el radio del círculo.
	cin  >> radio; //Almacenamos el radio en su variable correspondiente.
	cout << "El radio introducido es: " << radio << "cm" << endl; //Sacamos por pantalla el radio introducido.
	if (radio>0) { //Comprobamos que el radio introducido es un número positivo, en caso afirmativo procedemos con los cálculos.
		area=pi*pow(radio,2); //Calculamos el área.
		cout << "El área del círculo es de: " << area << "cm²" << endl; //Sacamos el área por pantalla.
		perimetro=2*pi*radio; //Calculamos el perímetro.
		cout << "El perímetro del círculo es de: " << perimetro << "cm" << endl; //Sacamos el perímetro por pantalla.	
	}
	else { //En caso de que el radio no sea un número positivo mostraremos los mensajes de error.
		cout << "¡El radio del círculo no puede ser 0, ni un número negativo!" << endl; //Indicamos que el radio no puede ser 0, ni un número negativo.
		cout << "Debe introducir un número positivo mayor que 0." << endl; //Indicamos que se debe introducir un número positivo.
	}
} //Fin del programa
