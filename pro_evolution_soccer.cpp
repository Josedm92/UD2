//Programa que simula un tiro libre en Pro Evolution Soccer.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	//Declaración e inicialización de variables.
	double punto1x=0.0, punto1y=0.0, punto2x=0.0, punto2y=0.0, disparox=0.0, disparoy=0.0;
	bool control=false;
	
	//Pedimos por pantalla la posición de la portería (esquina superior izquierda).
	cout << "Introduce esquina superior izquierda: " << endl;
	cout << "Horizontal: ";
	cin >> punto1x;
	cout << "Vertical: ";
	cin >> punto1y;
	
	//Pedimos por pantalla la posición de la portería (esquina inferior derecha).
	cout << "Introduce esquina inferior derecha: " << endl;
	do { //Comprobamos que se introduce un valor coherente.
		cout << "Horizontal: ";
		cin >> punto2x;
		if (punto2x<=punto1x) {
			cout << "Error: El lado derecho debe tener un valor superior al lado izquierdo" << endl;
		}
	} while (punto2x<=punto1x)
	do { //Comprobamos que se introduce un valor coherente.
		cout << "Vertical: ";
		cin >> punto2y;
		if (punto2y>=punto1y) {
			cout << "Error: El lado inferior debe tener un valor inferior al lado superior" << endl;
		}
	} while (punto2y>=punto1y);
	
	//Pedimos por pantalla la dirección del disparo.
	cout << "Introduce dirección del disparo: " << endl;
	cout << "Horizontal: ";
	cin >> disparox;
	do { //Comprobamos que se introduce un valor coherente.
		cout << "Vertical: ";
		cin >> disparoy;
		if (disparoy<punto2y) {
			cout << "Error: El disparo no puede ir por debajo del lado inferior de la portería."
		}
	} while (disparoy<punto2y);
	
	//Determinamos si es gol
	if (control==false && disparox>punto1x && disparox<punto2x && disparoy<punto1y && disparoy>punto2y){
		cout << "Gol" << endl;
		control=true;
	}
	
	//Determinamos si es larguero
	if (control==false && disparoy==punto1y && disparox>punto1x && disparox<punto2x) {
		cout << "El disparo ha dado en el larguero" << endl;
		control=true;
	}
	
	//Determinamos si es esquina
	if (control==false && disparoy==punto1y && disparox==punto1x) {
		cout << "El disparo ha dado en la esquina izquierda" << endl;
		control=true;
	}
	if (control==false && disparoy==punto1y  && disparox==punto2x) {
		cout << "El disparo ha dado en la esquina derecha" << endl;
		control=true;
	}
	
	//Determinamos si es poste
	if (control==false disparox==punto1x) {
		cout << "El disparo ha dado en el poste izquierdo" << endl;
		control=true;
	}
	if (control==false disparox==punto2x) {
		cout << "El disparo ha dado en el poste derecho" << endl;
		control=true;
	}v
	
	//Determinamos si es gol raso
	if (control==false && disparox>punto1x && disparox<punto2x && disparoy<punto1y && disparoy==punto2y){
		cout << "Gol raso" << endl;
		control=true;
	}
		
	//Determinamos si es fuera
	if (control==false) {
		cout << "Fuera" << endl;
	}
}