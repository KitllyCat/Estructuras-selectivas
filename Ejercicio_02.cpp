#include <iostream>
using namespace std;
int main(){
	
    double montoT, descuento=0, montoF;
    
    cout << "Ingresa el monto total de su compra: ";
    cin >> montoT;
	
    if (montoT > 1000) {
        descuento = (montoT/100)*10;
        montoF = montoT - descuento;
        cout << "El monto total a pagar con su descuento del 10% es de: S/" << montoF <<" (-"<<descuento<<")"<< endl;
    } else {
        montoF = montoT;
        cout << "El monto total a pagar sin su descuento es de: S/" << montoF << endl;
    }
    
    return 0;
}

