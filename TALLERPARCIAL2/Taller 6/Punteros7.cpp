#include <iostream>

using namespace std;

//Llenar un arreglo con números aleatorios y determinar qué números son pares.

int main()
{
    int arreglo1[500], num;
    int *parreglo1=&arreglo1[0];
    
    cout<<"Digite el tamano del arreglo que desee"<< endl;
    cin>>num;

    for(int i=0 ; i<num ; i++)
    {
        parreglo1[i]=rand();
        cout<<arreglo1[i]<<endl;

        if(parreglo1[i]%2==0)
        {
            cout << arreglo1[i] << " -> Es numero par"<<endl;
        }
        

    }
    
}