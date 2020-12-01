#include <iostream>

using namespace std;

//Desarrolle una función que calcule la corriente de una resistencia dada su tensión y resistencia.

float corriente(float a);

int main()
{

float d, c;
float a;
c=corriente(a);
cout<<"La corriente es "<<c;

}

float corriente(float a)
{

cout<<"Ingrese el valor del voltaje"<<endl;
float v;
cin>>v;
cout<<"Ingrese el valor de la resistencia"<<endl;
float r;
cin>>r;
float c=0;
c = v/r; 
return c;

}