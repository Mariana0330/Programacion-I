#include <iostream>
using namespace std;

//Mediana

int main()
{

int n;
float arreglo1[500];

cout<<"Digite la cantidad de numeros que desea ingresar"<<endl;
cin>>n;
cout<<"Los numeros que va a ingresar deben ser de forma ascendente"<<endl;

    for (int i=1; i<=n; i++)
        {
            cout<<"Ingrese el numero "<<i<<endl;
            cin>>arreglo1[i];
        
        }  
    
    if (n % 2 == 0)
    {
          
     cout<<"La mediana es "<<(arreglo1[n/2]+arreglo1[(n/2)+1])/2;

    }
    
    if (n % 2 != 0)
    {
          
     cout<<"La mediana es "<<arreglo1[(n+1)/2];

    }
    
}

