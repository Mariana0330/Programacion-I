#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int arreglo1[10];
    int *parreglo1 = &arreglo1[0];
    srand(time(NULL));
for (int i = 0; i < 10 ; i++)
    {
        
        parreglo1[i] = rand () %100;
        cout<<parreglo1[i]<<"  ";
        
    }cout<<endl;
    cout<<"estos numeros son pares:"<<endl;
    for (int i = 0; i < 10 ; i++)
    {
       if(arreglo1[i] % 2==0)
    {
        
        cout<<arreglo1[i]<<"  ";
    }
    }
    
    

    return 0;
}