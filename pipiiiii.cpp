//Ejemplo 3.5.2 de la página 82 - Programa que calcula el valor de pi con una precisión establecida.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
#include <cmath> //Incluimos librería cmath para poder usar la raíz cúbica (cbrt) y la potencia (pow).
#include <iomanip> //Incluimos librería iomanip para poder establecer la precisión en el cálculo de pi (setprecision).
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	//Declaración e inicialización de variables.
	int precision; 
	long double sumandos=0.0;
	long double valor=0.0;
	
	//Pedimos por pantalla el numero de sumandos que se quieran para calcular pi.
	cout << "Introduzca el número de sumandos con los que se desea calcular pi: ";
	cin >> precision;
	
	//Bucle que calcula el valor de pi.
	for (int i=0; i<=precision; i++) {
		sumandos+=pow(-1.0,i)/pow(((2.0*i)+1.0),3); //Cálculo con los sumandos actuales.
		valor=cbrt(32.0*sumandos); //Cálculo de pi.
		//Sacamos por pantalla el valor actual de pi.
		cout << "Valor de PI aproximado (" << i << "): " << setprecision(precision) << valor << endl;
	}
}
