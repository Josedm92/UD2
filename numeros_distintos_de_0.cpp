//Ejercicio que obliga al usuario a introducir dos números distintos de 0.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	double numero1=0.0,numero2=0.0; //Declaramos e inicializamos las variables.
	
	//Proceso para el primer número.
	do { //Este bucle se ejecuta una vez, y se sigue ejecutando hasta que el usuario introduzca un número distinto de 0.
		cout << "Introduzca un número DISTINTO DE 0: " << endl; //Pedimos un número distinto de 0 por pantalla.
		cin >> numero1; //Almacenamos el número en su vaiable.
	} while (numero1==0.0); //Comprobamos si el número es igual a 0, en caso afirmativo se repite el bucle.
	//Proceso para el segundo número.
	do { //Este bucle se ejecuta una vez, y se sigue ejecutando hasta que el usuario introduzca un número distinto de 0.
		cout << "Introduzca otro número DISTINTO DE 0: " << endl; //Pedimos un número distinto de 0 por pantalla.
		cin >> numero2; //Almacenamos el número en su vaiable.
	} while (numero2==0.0); //Comprobamos si el número es igual a 0, en caso afirmativo se repite el bucle.

	cout << "Ha introducido los números: " << numero1 << " y " << numero2 << endl; //Sacamos por pantalla los números introducidos.
}
