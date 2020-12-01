#include <iostream>
#include <math.h>

using namespace std;

//Desarrolle una función que calcule el área de un circulo

float area(float r, float a);

int main()
{
    float a, r;
    a=area(r, a);
    cout<<"El area de la circunferencia es "<<a<<endl;
}

    float area(float r, float a)
    {
        cout<<"Este es un programa para calcular el area de una circunferencia"<<endl;
        cout<<"Ingrese el radio"<<endl;
        cin>>r;

        a=(M_PI)*(r*r);
        return a;

    }