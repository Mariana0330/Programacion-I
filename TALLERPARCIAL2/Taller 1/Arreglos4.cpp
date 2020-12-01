#include <iostream>
using namespace std;

//Desarrolle un programa donde almacene la temperatura de las ultimas 24 horas 
//y le permita al usuario conocer la temperatura en la hora que desee.

int main()
{

int temp[24];
int hora=0;

    for(int i=0; i<24; i++)
    {

        temp[i]=i;
        cout<<temp[i]<<" ";

    }

cout<<endl;

    for(int i=0; i<24; i++)
    {

        temp[i]=16+i;
        cout<<temp[i]<<" ";

    }

cout<<endl<<"Para saber la temperatura a una hora en especifico, ingrese la hora en formato militar"<<endl;    
cin>>hora;

    if(hora<0 or hora>24)
    {

        cout<<"Esa no es una hora valida"<<endl;

    }

    else

    {
      
        cout<<"La temperatura a la hora "<<hora<<" es de "<<temp[hora]<<" grados celsius";
   
    }
    

}