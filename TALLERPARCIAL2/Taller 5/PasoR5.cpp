#include <iostream>
#include <math.h>

using namespace std;

//Desarrolle una función que ingrese un valor en pesos y genere el resultado en dólares y euros.

void pde(float &p, float &d, float &e);

int main()
{
    float p, d, e;
    pde(p, d, e);
    cout<<"Sus "<<p<<" pesos convertidos a dolares son: "<<d<<endl;
    cout<<"Sus "<<p<<" pesos convertidos a euros son: "<<e<<endl;

}

void pde(float &p, float &d, float &e)
{
    cout<<"Hola, usuario. Ingrese el valor en pesos para pasarlo a dolares y euros"<<endl;
    cin>>p;
    d=p*0.00027;
    e=p*0.00023;
}