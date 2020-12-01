#include <iostream>
using namespace std;

//Desarrolle un programa que genere una matriz identidad de tamaño nxn

int main()
{

int n;

    cout<<"Ingrese el tamano de la matriz nxn"<<endl;
    cin>>n;

int arregloA[n][n];

    for(int i=0;i<n;i++)
    {

        for (int j=0;j<n;j++)
        {
            
            if(i==j)
            {
                arregloA[i][j]=1;
            }
            else
            {
                arregloA[i][j]=0;
            }
             
        }
    }

    cout<<endl<<"La matriz identidad es:"<<endl;

    for(int i=0;i<n;i++)
    {

        for (int j=0;j<n;j++)
        { 
            cout<<arregloA[i][j]<<" ";
        }cout<<endl;
    } 

}