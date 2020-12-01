#include <iostream>
#include <math.h>
using namespace std;

//Media geométrica

int main() 
{

float n, prom=1, num, arreglo1[50], geom;

cout<<"Digite la cantidad de numeros que desea ingresar"<<endl;
cin>>n;

    for (int i=1; i<=n; i++)
        {
            cout<<"Ingrese el numero "<<i<<endl;
            cin>>arreglo1[i];
            prom=prom*arreglo1[i];   
        }

    geom = pow(prom, 1/n); 
    cout<<"La media geometrica es "<<geom<<endl;
}