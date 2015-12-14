//Programa que simula un disparo en Call of Duty.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
#include <cmath> //Incluimos librería cmath para poder usar sqrt y pow.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	//Declaración e inicialización de las variables.
	double posx1=0.0, posy1=0.0, radio1=0.0, posx2=0.0, posy2=0.0, radio2=0.0, distancia=0.0;
	
	//Pedimos por pantalla los datos de la posición y el tamaño del enemigo.
	cout << "Introduce posicion del enemigo: " << endl;
	cout << "Horizontal: ";
	cin >> posx1;
	cout << "Vertical: ";
	cin >> posy1;
	cout << "Introduce tamaño del enemigo: ";
	cin >> radio1;

	//Pedimos por pantalla los datos de la posición y la amplitud de la mirilla.
	cout << "Introduce posición de la mirilla: " << endl;
	cout << "Horizontal: ";
	cin >> posx2;
	cout << "Vertical: ";
	cin >> posy2;
	cout << "Introduce amplitud de la mirilla: ";
	cin >> radio2;

	//Calculamos la distancia entre ambos.
	distancia=sqrt(pow((posx2-posx1),2)+pow((posy2-posy1),2)); 

	//Basándonos en la distancia calculada y en los radios determinamos si hay contacto entre las circunferencias.
	if (distancia==0&&radio1==radio2) { //Comprobamos si las circunferencias son iguales.
		cout << "¡HEADSHOT!" << endl;
	} 
	else { //En caso contrario analizamos los distintos casos
		if ((radio1+radio2)<distancia) { //Las circunferencias no se tocan.
			cout << "¡Fallo!" << endl;
		}
		if (radio1+distancia<radio2) { //La circunferencia 1 está dentro de la circunferencia 2.
			cout << "¡No scope!" << endl;
		}
		if (radio2+distancia<radio1) { //La circunferencia 2 está dentro de la circunferencia 1.
			cout << "¡Quick scope!" << endl;
		}
		if ((radio1+radio2)==distancia) { //Las circunferencias se tocan en un punto.
			cout << "¡Buen disparo!" << endl; 
		}
		if ((radio1+radio2)>distancia) { //Las circunferencias se tocan en dos puntos.
			cout << "¡Disparo crítico!" << endl;
		}
	}
}
