#include <iostream>

using namespace std;

int main()
{
    int n=100;
    int arregloA[n],vector[n];
    int *parregloA = &arregloA[0];
    for (int i=0;i<51;i++)
    {
        parregloA[i] = 2*i;
    }
    for (int i=0;i<51;i++)
    {
        vector[i] = parregloA[i]*3;
    }
    cout<<endl;
    cout<<"Arreglo A:"<<endl;
    for (int i=0;i<51;i++)
    {
        cout<<arregloA[i]<<"  ";
    }cout<<endl;
    cout<<"Por escalar : "<<endl;
    for (int i=0;i<51;i++)
    {
        cout<<vector[i]<<"  ";
    }
    
}