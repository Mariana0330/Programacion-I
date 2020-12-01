#include <iostream>

using namespace std;

int main()
{
    int arreglotemp[25],hora,nuevahora,temperatura;
    cout<<"Programa para almacenar la temperatura las 24 horas del dia"<<endl;
    for(int i=0; i<25;i++)
    {
        cout<<"Ingrese la temperatura de la hora "<<i<<endl;
        cin>>temperatura;
        arreglotemp[i]=temperatura;
        
    }
    cout<<"Sus datos ingresados son:"<<endl;
    for(int i = 0 ; i<25 ;i++)
    {
        cout<<arreglotemp[i]<<"  ";  
    }
    cout<<endl<<endl;
    cout<<"Ahora ingrese la hora"<<endl;
    cin>>hora;
    
    if (hora<0 or hora>24)
    {
        cout<<"Numero invalido"<<endl;
    }
    else
    {
    cout<<"La temperatura en la hora: "<<hora<<" es de: "<<arreglotemp[hora]<<" grados celsius"<<endl;
    
    }  
    
    
}