//Ejercicio 2.6 de la página 53. Programa para resolver una ecuación de segundo grado v2.0.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
#include <cmath> //Incluimos la librería cmath para poder hacer la raiz cuadrada.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	double a,b,c,x; //Declaración de variables
	
	//Pedimos por pantalla los valores de la ecuación.
	cout << "Introduzca coeficiente de 2º grado: " << endl; //Pedimos el coeficiente de segundo grado.
	cin >> a; //Almacenamos el valor en su variable.
	cout << "Introduzca coeficiente de 1 grado: " << endl; //Pedimos el coeficiente de primer grado.
	cin >> b; //Almacenamos el valor en su variable.
	cout << "Introduzca coeficiente independiente: " << endl; //Pedimos el coeficiente independiente.
	cin >> c; //Almacenamos el valor en su variable.
	
	//Comprobamos si la ecuación tiene resultado, para ello ponemos en las condiciones que el discriminante no sea un número positivo y que el divisor no sea 0.
	if ( (pow(b,2)-4*a*c)>=0 && (2*a)!=0 ) { //Si se cumplen ambas soluciones se calcula la ecuación y se sacan por pantalla los resultados
		cout << "Solución para la ecuación: " << a << "x²+" << b << "x+" << c << "=0" << endl; //Sacamos por pantalla la ecuación a resolver.
		//Resolvemos la primera solución y la sacamos por pantalla
		x=(b+sqrt(pow(b,2)-4*a*c))/(2*a);
		cout << "Solución 1: " << x << endl;
		//Resolvemos la segunda solución y la sacamos por pantalla
		x=(b-sqrt(pow(b,2)-4*a*c))/(2*a);
		cout << "Solución 2: " << x << endl;
	} 
	else { //Si no se cumple alguna de las condiciones se da un mensaje de error indicando el fallo.r
		cout << "La ecuación no puede resolverse: " << endl;
		if ( (pow(b,2)-4*a*c)<0 ) {
			cout << " -El discriminante de la raíz cuadrada es un número negativo." << endl;
		}
		if ( (2*a)==0 ) {
			cout << " -El divisor es 0." << endl;
		}
	}	
} //Fin del programa.

