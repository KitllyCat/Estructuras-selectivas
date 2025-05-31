#include <iostream>
using namespace std;

int main() {
	
	double montoT, descuento=0, numRand, montoF;

    cout << "Ingresa el monto total de la compra: ";
    cin >> montoT;
    cout << "Ingresa el numero escogido al azar: ";
    cin >> numRand;
    
    if (numRand < 74) {
        descuento = (15 * montoT) / 100;
    } else {
        descuento = (20 * montoT) / 100;
    }
	
	montoF=montoT-descuento;
	
    cout << "El descuento aplicado es de: S/ " << descuento << " y su producto con el descuento aplicado seria de "<<montoF<<"."<<endl;

    return 0;
}

