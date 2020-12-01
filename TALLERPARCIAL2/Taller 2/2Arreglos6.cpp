#include <iostream>
#include <math.h>
using namespace std;

//Sesgo

int main() 
{

float n, media, prom=0, num, arreglo1[50], sesgo;

cout<<"Digite la cantidad de numeros que desea ingresar"<<endl;
cin>>n;

    for (int i=0; i<n; i++)
        {
            cout<<"Ingrese el numero "<<i+1<<endl;
            cin>>arreglo1[i];
            prom=prom+arreglo1[i];   
        }
    
    media=prom/n;
    sesgo=((1/n)*(prom-media)*(prom-media)*(prom-media))/pow((sqrt((1/n)*(prom-media)*(prom-media))), 3);
    cout<<"La media es "<<media<<endl;
    cout<<"El sesgo es "<<sesgo<<endl;
    

}
