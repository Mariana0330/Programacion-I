#include <iostream>

using namespace std;

//Desarrolle una función que tenga tres valores de entrada y de salida el número mayor y el menor.

void mayormenor(float &a, float &b, float &c);

int main() 
{
    float a, b, c;
    mayormenor(a, b, c);
}

void mayormenor(float &a, float &b, float &c)
{
    cout<<"Ingrese tres numeros y el programa le dira cual es el mayor y cual es el menor"<<endl;
    cout<<"Ingrese el primer numero"<<endl;
    cin>>a;
    cout<<"Ingrese el segundo numero"<<endl;
    cin>>b;
    cout<<"Ingrese el tercer numero"<<endl;
    cin>>c;
    float max=0;
    
    if (a>b && a>c)
    {
        cout<<a<<" es el mayor"<<endl;
    }

    if (b>a && b>c)
    {
        cout<<b<<" es el mayor"<<endl;
    }

     if (c>a && c>b)
    {
        cout<<c<<" es el mayor"<<endl;
    }

    if (a<b && a<c)
    {
        cout<<a<<" es el menor"<<endl;
    }

    if (b<a && b<c)
    {
        cout<<b<<" es el menor"<<endl;
    }

    if (c<a && c<b)
    {
        cout<<c<<" es el menor"<<endl;
    }
}