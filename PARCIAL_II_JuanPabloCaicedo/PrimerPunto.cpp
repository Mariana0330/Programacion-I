#include <iostream>

using namespace std;

int main()
{
    int  n=3,contador=0,n2=10000,n3=-10000;
    
    cout<<"Programa para visualizar el numero menor,mayor y el promedio de ambos valores de una matriz"<<endl;
    cout<<"Este programa tiene un intervalo desde [-10000,10000]"<<endl;/*En esta parte se especifica que tiene rango porque si el usuario desea por ejemplo digitar numeros por fuera de este intervalo, el programa no funciona*/
    float arregloA[n][n] = {{50,10,20},{30,20,10},{10,20,30}};/*Llene el arreglo a mi antojo, aunque tambien se podria realizar pidiendole al usuario que ingrese los numeros del arreglo*/
    cout<<"La matriz es: "<<endl;

    for (int i=0;i<n;i++)
    {
        for (int j = 0; j<n; j++)
        {
            cout<<arregloA[i][j]<<" ";/*Muestro la matriz, para que el usuario mire lo que ha ingresado*/
        }cout<<endl;
    }
    for (int i=0;i<n;i++) /*Ciclo for, para obtener el numero minimo*/
    {
        for (int j=0;j<n;j++)
        { 
            if (arregloA[i][j]<n2) 
         {
           n2=arregloA[i][j]; 
         }

        }

    }
    cout<<"El numero minimo es "<<n2;
    cout<<endl;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        { 
            if (arregloA[i][j]>n3) 
         {
           n3=arregloA[i][j]; 
         }

        }

    }
    cout<<"El numero mayor es: "<<n3<<endl; /*Ciclo for, para obtener el numero mayor*/
    cout<<"El promedio de los numeros es: "<<(n2+n3)/2; /*Por ultimo, se calcula el promedio de ambos valores*/

    

    return 0;
}