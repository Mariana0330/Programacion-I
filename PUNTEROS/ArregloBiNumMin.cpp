#include <iostream>

using namespace std;

int main()
{
    int  n=3,contador=0,n2=1000;
    

    cout<<"Programa para visualizar el numero menor de una matriz"<<endl;
    
    float arregloA[n][n] = {{50,10,20},{30,20,10},{10,20,30}};
    float *parregloA = &arregloA[0][0];

    for (int i=0;i<n;i++)
    {
        for (int j = 0; j<n; j++)
        {
            cout<<parregloA[i*n + j]<<" ";
        }cout<<endl;
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        { 
            if (parregloA[i*n + j]<n2) 
         {
           n2=parregloA[i*n + j]; 
         }

        }

    }
    cout<<"El numero minimo es "<<n2;

    

    return 0;
}