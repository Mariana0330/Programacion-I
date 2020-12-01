#include <iostream>

using namespace std;

/*-Desarrolle un programa que guarde en un arreglo bidimensional los primeros 20 números de la sucesión de Fibonacci.*/

int main()
{
    
int arregloA[5][4], k=1,s=0,c=1, i=0, N, l=0;

    for(int i=0;i<5;i++)
    {

        for (int j=0;j<4;j++)
        {
 
        if (i==0 && j==0)
        {
            arregloA[i][j]=0;
        } 

        arregloA[i][j+1]=k;
        k=s+c;
        s=c;
        c=k;
        

        }
    }

    for(int i=0;i<5;i++)
    {

        for (int j=0;j<4;j++)
        {
 
        cout<<arregloA[i][j]<<" ";

        }cout<<endl;
    }

}