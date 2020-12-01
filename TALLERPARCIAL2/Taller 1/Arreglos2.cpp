#include <iostream>
using namespace std;

//Llenar arreglo con los números pares del 0 al 100

int main() 
{

int arreglo1[51];

    for (int i=0; i<51; i++)
    {

    arreglo1[i]=i*2;

    }

    for (int i=0; i<51; i++)
    {

    cout<<arreglo1[i]<<" ";

    }

}
