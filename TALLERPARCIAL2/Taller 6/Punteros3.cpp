#include <iostream>
using namespace std;

//Multiplicar un vector de 50 posiciones por un escalar.

int main()

{

int vector1[50];
int *pvector1=&vector1[0];
cout<<"El vector original es:"<<endl;
    for(int i=0; i<50; i++)
    {

    pvector1[i]=1;
    cout<<vector1[i]<<" ";

    }

cout<<endl<<"El vector multiplicado por el escalar es"<<endl;

    for(int i=0; i<50; i++)
    {

    pvector1[i]=vector1[i]*5;

    }

    for(int i=0; i<50; i++)
    {

    cout<<vector1[i]<<" ";

    }

}




