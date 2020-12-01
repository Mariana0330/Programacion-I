#include <iostream>

using namespace std;

int main()
{
    int arregloA[5],num,numMaximo=0;
    cout<<"Programa para obtener el numero mayor de numeros ingresados por teclado"<<endl;
    for(int i=0; i<5;i++)
    {
        cout<<"Ingrese el numero "<<i+1<<endl;
        cin>>num;
        arregloA[i]=num;
        
    }
    cout<<"Sus datos ingresados son:"<<endl;
    for(int i = 0 ; i<5 ;i++)
    {
        cout<<arregloA[i]<<"  ";  
    }
    for(int i=0; i<5;i++)
    {
        if(arregloA[i]>numMaximo)
        {
            numMaximo=arregloA[i];
        }

    }
    cout<<endl;
    cout<<"El numero maximo es: "<<numMaximo<<endl;
    
    
}