#include <iostream>

using namespace std;

int main()
{
    int n=10;
    int arregloA[n];
    int *parregloA = &arregloA[0];
    for (int i=0;i<10;i++)
    {
        cout<<"Ingrese el valor "<<i+1<<" del arreglo"<<endl;
        cin>>parregloA[i];
    }
    cout<<endl;
    cout<<"Arreglo A:"<<endl;
    for (int i=0;i<10;i++)
    {
        cout<<arregloA[i]<<"  ";
    }cout<<endl;
    
    
}