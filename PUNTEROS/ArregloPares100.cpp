#include <iostream>

using namespace std;

int main()
{
    int n=100;
    int arregloA[n];
    int *parregloA = &arregloA[0];
    for (int i=0;i<51;i++)
    {
        parregloA[i] = 2*i;
    }
    for (int i=0;i<51;i++)
    {
        cout<<arregloA[i]<<"  ";
    }
    
    
}