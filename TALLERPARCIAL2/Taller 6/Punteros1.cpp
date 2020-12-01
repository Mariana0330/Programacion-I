#include <iostream>
using namespace std;

//-Llenar un arreglo de 100 posiciones con 1.

int main ()
{

int arregloA[100];
int *parregloA=&arregloA[0];

for (int i=0; i<100; i++)
    {

    parregloA[i]=1;

    }   

    for (int i=0; i<100; i++)
    {

    cout<<arregloA[i]<<" ";

    }
}

