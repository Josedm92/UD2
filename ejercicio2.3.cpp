//Ejercicio 2.3 de la pagina 51.
#include <iostream> //Incluimos libreria iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	int dato; //Declaración de variable.
		
	cout << "Introduzca un valor distinto de cero" << endl; //Pide por pantalla introducir un número distinto de 0.
	cin >> dato; //Almacena el número en su variable.
	//Caso 1, con paréntesis.
	cout << "\nEn el caso de dejar los paréntesis sale este resultado: " << endl; //Exponemos el resultado de dejar los paréntesis.
	if (dato!=0) { //Comprueba si el dato introducido es distinto de 0.
		//Si el dato es distinto de 0, lo indica en estas líneas.
		cout <<"Ha escrito " << dato << " que es distinto de cero" << endl; 
		cout << "Es un alumno muy obediente" << endl;	
	}
	if (dato==0) //Comprueba si el dato introducido es igual a 0.
		cout << "Ups! Que desobediente..." << endl; //En caso afirmativo lo indica en esta línea.
	//Caso 2, sin paréntesis.
	cout << "\nEn el caso de quitar los paréntesis sale este resultado: " << endl; //Exponemos el resultado de quitar los paréntesis.
	if (dato!=0) //Comprueba si el dato introducido es distinto de 0.
		cout <<"Ha escrito " << dato << " que es distinto de cero" << endl; //Si el dato es distinto de 0, lo indica en esta línea.
		cout << "Es un alumno muy obediente" << endl; //Al quitar los paréntesis esta línea queda fuera del if y, por lo tanto, se ejecutará siempre.
	if (dato==0) { //Comprueba si el dato introducido es igual a 0.
		cout << "Ups! Que desobediente..." << endl; //En caso afirmativo lo indica en esta línea.
		//Sacamos por pantalla una línea explicando por qué pone a la vez que es obediente y que es desobediente.
		cout << "Esto ocurre porque al quitar los paréntesis la línea: 'Es un alumno muy obediente' se ejecutará siempre, porque queda fuera del if." << endl;
	}
} //Fin del programa
