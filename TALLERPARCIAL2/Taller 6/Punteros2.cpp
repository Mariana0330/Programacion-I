#include <iostream>
using namespace std;

//Llenar arreglo con los números pares del 0 al 100

int main() 
{

int arregloA[51];
int *parregloA=&arregloA[0];

    for (int i=0; i<51; i++)
    {

    parregloA[i]=i*2;

    }

    for (int i=0; i<51; i++)
    {

    cout<<arregloA[i]<<" ";

    }

}