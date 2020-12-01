#include <iostream>

using namespace std;

//Llenar un arreglo con números aleatorios y determinar qué números son pares.

int main()
{
    int arreglo1[500], num;
    
    cout<<"Digite el tamano del arreglo que desee"<< endl;
    cin>>num;

    for(int i=0 ; i<num ; i++)
    {
        arreglo1[i]=rand();
        cout<<arreglo1[i]<<endl;

        if(arreglo1[i]%2==0)
        {
            cout << arreglo1[i] << " -> Es numero par"<<endl;
        }
        

    }
    
}