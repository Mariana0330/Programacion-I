#include <iostream>

using namespace std;

//Llenar un arreglo de 10 posiciones con número ingresados por teclado.

int main() 
{

int arreglo1[10], n=0;

    for (int i=0; i<10; i++)
    {
    
    cout<<"Ingrese el numero "<<i+1<<" con el que quiere llenar el arreglo"<<endl;
    cin>>n;
    arreglo1[i]=n;

    }
    
    cout<<endl<<"Su arreglo de numeros es:"<<endl;
    
    for (int i=0; i<10; i++)
    {

    cout<<arreglo1[i]<<" ";

    }

}