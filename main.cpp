//convertidor de dolares a colones
//realizado por Alejandro Monge
#include <iostream>
using namespace std;

int main(void) 
{

double tipo_cambio, dolares, colones; //double porque puede haber decimales

cout <<"Ingrese el Tipo de Cambio del BCCR; "<<endl;
cin>>tipo_cambio;

cout<<"Ingrese la cantidad de dolares: "<<endl;
cin>>dolares;

colones=dolares*tipo_cambio;

cout<<dolares<<" La cantidad de dolares son "<<colones <<"colones ";


}