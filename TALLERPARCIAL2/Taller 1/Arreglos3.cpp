#include <iostream>
using namespace std;

//Multiplicar un vector de 50 posiciones por un escalar.

int main()

{

int vector1[50];

    for(int i=0; i<50; i++)
    {

    vector1[i]=1;
    cout<<vector1[i]<<" ";

    }

cout<<endl;

    for(int i=0; i<50; i++)
    {

    vector1[i]=vector1[i]*5;

    }

    for(int i=0; i<50; i++)
    {

    cout<<vector1[i]<<" ";

    }

}




