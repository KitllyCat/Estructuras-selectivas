#include <iostream>
#include <windows.h>

using namespace std;

int main() {
   	SetConsoleOutputCP(CP_UTF8);
	char sexo;
    int edad;
    double numPulsaciones;

    cout << "Ingrese el sexo (F/M): ";
    cin >> sexo;
    cout << "Ingrese la edad: ";
    cin >> edad;

    if (sexo == 'F' || sexo == 'f') {
        numPulsaciones = (220 - edad) / 10.0;
    } else if (sexo == 'M' || sexo == 'm') {
        numPulsaciones = (210 - edad) / 10.0;
    } else {
        cout << "Sexo no válido. Intente nuevamente." << endl;
        return 1;
    }

    cout << "El número de pulsaciones por cada 10 segundos es: " << numPulsaciones << endl;

    return 0;
}
