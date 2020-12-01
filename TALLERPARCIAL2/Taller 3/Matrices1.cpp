#include <iostream>
using namespace std;

//-Desarrolle un programa que calcule el valor mínimo en un arreglo de tamaño nxn

int main()
{

int n=3, arregloA[n][n], contador=0, min=500;

    for(int i=0;i<n;i++)
    {

        for (int j=0;j<n;j++)
        {
            cout<<"Ingrese el componente "<<contador+1<<" de la matriz"<<endl;
            contador++;
            cin>>arregloA[i][j];

        }
    }

    for(int i=0;i<n;i++)
    {

        for (int j=0;j<n;j++)
        { 
            cout<<arregloA[i][j]<<" ";
        }cout<<endl;
    }

     for(int i=0;i<n;i++)
    {

        for (int j=0;j<n;j++)
        { 
            if(arregloA[i][j]<min)
            {
                min=arregloA[i][j];
            }

         }
    }

    cout<<"El minimo en la matriz es "<<min;


}