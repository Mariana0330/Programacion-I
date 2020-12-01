#include <iostream>
#include <math.h>

using namespace std;

//Desarrolle una función para calcular el área y radio de un circulo dada su circunferencia.

void ar(float c, float &a, float &r);

int main()
{
    float c, a, r;
    ar(c, a, r);
    cout<<"El area de la circunferencia es "<<a<<" y el radio es "<<r<<endl;


}

void ar(float c, float &a, float &r)
{
    cout<<"Hola, usuario. Este es un programa para calcular el area y el radio de un circul odada su circunferencia"<<endl;
    cout<<"Ingrese su circunferencia"<<endl;
    cin>>c;

    r=c/(2*M_PI);
    a=(M_PI)*(r*r);

}