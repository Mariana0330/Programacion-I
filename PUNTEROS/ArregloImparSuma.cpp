#include <iostream>

using namespace std;

int main()
{
    int arregloA[1000],n,resultado,suma=0;
    int *parregloA = &arregloA[0];
    cout<<"Programa para obtener la suma de los numeros impares en un intervalo desde cero hasta n.(n entiendase por numero digitado por usuario)."<<endl;
    cout<<"ingrese el numero"<<endl;
    cin>>n;
    if (n % 2==0)
    {
    for(int i=0; i<n/2;i++)
    {
        resultado=(2*i)+1;
        parregloA[i]=resultado;
        suma = suma+parregloA[i];
        
    }
    cout<<"Sus datos ingresados son:"<<endl;
    for(int i = 0 ; i<n/2 ;i++)
    {
        cout<<arregloA[i]<<"  ";  
    }cout<<endl;
    cout<<"La suma de los numeros es:"<<suma<<endl;

    } 
    else
    {
        for(int i=0; i<=n/2;i++)
    {
        parregloA[i]=(2*i)+1;
        suma = suma+parregloA[i];
    }
    cout<<"Sus datos ingresados son:"<<endl;
    for(int i = 0 ; i<=n/2 ;i++)
    {
        cout<<arregloA[i]<<"  ";  
    }cout<<endl;
    cout<<"La suma de los numeros es:"<<suma<<endl;
    }
    
    
    
    
}