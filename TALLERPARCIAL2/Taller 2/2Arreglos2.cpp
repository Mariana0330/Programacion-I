#include <iostream>
using namespace std;

//Media aritmética
//momentos estadísticos

int main() 
{

float n, prom=0, num, arreglo1[50];

cout<<"Digite la cantidad de numeros que desea ingresar"<<endl;
cin>>n;

    for (int i=0; i<n; i++)
        {
            cout<<"Ingrese el numero "<<i+1<<endl;
            cin>>arreglo1[i];
            prom=prom+arreglo1[i];   
        }
    
    cout<<"La media es "<<prom/n<<endl;
}