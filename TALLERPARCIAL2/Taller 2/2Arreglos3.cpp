#include <iostream>
#include <math.h>
using namespace std;

//Desviación estándar 

int main() 
{

float n, media, prom=0, num, arreglo1[50], des;

cout<<"Digite la cantidad de numeros que desea ingresar"<<endl;
cin>>n;

    for (int i=0; i<n; i++)
        {
            cout<<"Ingrese el numero "<<i+1<<endl;
            cin>>arreglo1[i];
            prom=prom+arreglo1[i];   
        }
    
    media=prom/n;
    des=sqrt((1/(n-1))*(prom-media)*(prom-media));
    cout<<"La media es "<<media<<endl;
    cout<<"La desviacion estandar es "<<des<<endl;
    

}
