#include <iostream>

using namespace std;

//Dado un arreglo de N posiciones determine cual es el mayor de todos los números.

int main() 
{

int n=0;

cout<<"Ingrese el tamano del arreglo"<<endl;
cin>>n;
int arreglo1[n], max=0;

    for (int i=0; i<n; i++)
    {

    arreglo1[i]=i;

    }
    
    cout<<endl<<"Su arreglo de numeros es:"<<endl;
    
    for (int i=0; i<n; i++)
    {

     cout<<arreglo1[i]<<" ";

     if(arreglo1[i]>max)
                {
                    max=arreglo1[i];
                }
    }

    
    cout<<endl<<"El numero maximo es "<<max<<endl;

}