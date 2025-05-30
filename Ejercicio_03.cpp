#include <iostream>
using namespace std;

int main() {
    int numCamisas;
    float precioU, montoT, descuento=0, pagoM;
    
    cout << "Ingresa el numero de camisas compradas: "<<endl;
    cin >> numCamisas;
    cout << "Ingresa el precio unitario por camisa: s/";
    cin >> precioU;

    montoT = numCamisas * precioU;

    if (numCamisas >= 3) {
        descuento = (20 * montoT) / 100;
        pagoM = montoT - descuento;
        cout << "El monto total a pagar con su descuento es de: S/ " << pagoM << endl;
    } else {
        descuento = (10 * montoT) / 100;
        pagoM = montoT - descuento;
        cout << "El monto total a pagar con su descuento es de: S/ " << pagoM << endl;
    }

    return 0;
}
