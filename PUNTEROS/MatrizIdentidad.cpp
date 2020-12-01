#include <iostream>

using namespace std;

int main()
{
    int  n;
    cout<<"Programa para visualizar la matriz identidad de nxn:"<<endl;
    cin>>n;
    float arregloA[n][n];
    float *parregloA = &arregloA[0][0];

    for (int i=0;i<n;i++)
    {
        for (int j = 0; j<n; j++)
        {
            if(i==j)
            {
                parregloA[i*n + j] = 1;
            }
            else
            {
                parregloA[i*n + j]= 0;
            }
            
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j = 0; j<n; j++)
        {
            cout<<parregloA[i*n + j]<<" ";
        }cout<<endl;
    }
    

    return 0;
}