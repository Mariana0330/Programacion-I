#include <iostream>
#include <math.h>
using namespace std;

int main() 
{

float n,arreglo1[5000], prom=1, num, geometrica;

cout<<"Digite la cantidad de numeros "<<endl;
cin>>n;

    for (int i=1; i<=n; i++)
        {
            cout<<"Ingrese el numero "<<i<<endl;
            cin>>arreglo1[i];
            prom=prom*arreglo1[i];   
        }

    geometrica = pow(prom, 1/n); 
    cout<<"La media geometrica es "<<geometrica<<endl;
}