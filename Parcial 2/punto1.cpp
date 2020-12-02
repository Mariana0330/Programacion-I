#include <iostream>

using namespace std;

/*Desarrolle programa que calcule el número mayor y menor de un arreglo
bidimensional con tamaño nxn y genere como resultado el promedio de
ambos valores.*/

int main()
{

cout<<"Hola, usuario. Este programa calcula el numero mayor y menor de una matriz, y ademas los promedia"<<endl;
cout<<"Ingrese el tamano del arreglo que quiere llenar"<<endl;
int n;
cin>>n;
float arregloA[n][n], contador=0, min=500, max=-500;

    for(int i=0;i<n;i++)
    {

        for (int j=0;j<n;j++)
        {
            cout<<"Ingrese el componente "<<contador+1<<" de la matriz"<<endl;
            contador++;
            cin>>arregloA[i][j];//para llenar la matriz

        }
    }
    cout<<endl<<"Su matriz es"<<endl;
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
            if(arregloA[i][j]<min)//evalua el minimo
            {
                min=arregloA[i][j];
            }

            if(arregloA[i][j]>max)//evalua el maximo
            {
                max=arregloA[i][j];
            }

         }
    }

    cout<<endl<<"El minimo en la matriz es "<<min<<endl;
    cout<<"El maximo en la matriz es "<<max<<endl;
    float prom=(max+min)/2;
    cout<<"El promedio de los valores es "<<prom<<endl;


}