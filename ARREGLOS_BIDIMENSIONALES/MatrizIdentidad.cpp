#include <iostream>

using namespace std;

int main()
{
    int  n;
    cout<<"Programa para visualizar la matriz identidad de nxn:"<<endl;
    cin>>n;
    float arregloA[n][n];

    for (int i=0;i<n;i++)
    {
        for (int j = 0; j<n; j++)
        {
            if(i==j)
            {
                arregloA[i][j] = 1;
            }
            else
            {
                arregloA[i][j]= 0;
            }
            
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j = 0; j<n; j++)
        {
            cout<<arregloA[i][j]<<" ";
        }cout<<endl;
    }
    

    return 0;
}