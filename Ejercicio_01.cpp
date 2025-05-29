#include <iostream>
using namespace std;
int main(){
	
	double nota1, nota2, nota3, promedio;
	
	cout<<"Ingrese la primera calificacion del alumno: ";
	cin>>nota1;
	cout<<"Ingrese la segunda calificacion del alumno: ";
	cin>>nota2;
	cout<<"Ingrese la tercera calificacion del alumno: ";
	cin>>nota3;
	
	promedio=(nota1+nota2+nota3)/3;
	
	if (promedio >= 70){
		cout<<endl;
		cout<<"Su promedio es de "<<promedio<<endl;
		cout<<"El alumno aprobo."<<endl;
	} else {
		cout<<endl;
		cout<<"Su promedio es de "<<promedio<<endl;
		cout<<"El alumno desaprobo."<<endl;
		}
	return 0;
	
}
