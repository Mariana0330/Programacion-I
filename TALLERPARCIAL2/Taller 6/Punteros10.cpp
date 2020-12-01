#include <iostream>
using namespace std;

//-Desarrolle un programa que calcule la suma de dos matrices


int main(){

    cout<<"Hola, usuario. Esto es un peograma que suma dos matrices"<<endl;
    int n, contador1=0, contador2=0;
    cout<<"Ingrese el tamano de las matrices nxn"<<endl;
    cin>>n;

    int arregloA[n][n], arregloB[n][n], arregloC[n][n];
    int *parregloA=&arregloA[0][0], *parregloB=&arregloB[0][0], *parregloC=&arregloC[0][0]; 

    for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                {
                cout<<"Ingrese el componente "<<contador1+1<<" de la primera matriz"<<endl;
                contador1++;
                cin>>parregloA[i*n + j];

                }
            }cout<<endl<<"Ahora la segunda matriz"<<endl;

              for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                {
                cout<<"Ingrese el componente "<<contador2+1<<" de la segunda matriz"<<endl;
                contador2++;
                cin>>parregloB[i*n + j];

                }
            }cout<<endl<<"Su primera matriz es:"<<endl;

            for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                { 
                cout<<arregloA[i][j]<<" ";

                }cout<<endl;
            }cout<<endl<<"Su segunda matriz es:"<<endl;

             for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                { 
                cout<<arregloB[i][j]<<" ";

                }cout<<endl;
            }

             for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                { 
                
                parregloC[i*n + j]= parregloA[i*n + j] + parregloB[i*n + j];

                }cout<<endl;
            }cout<<endl<<"La suma de las matrices es:"<<endl;

             for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                { 
                cout<<arregloC[i][j]<<" ";

                }cout<<endl;
            }
}