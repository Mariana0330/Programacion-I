#include <iostream>

using namespace std;

//Desarrolle una función que calcule el factorial de un número.

int factorial(int a);

int main()
{
int b, x;
cout<<"Ingrese el numero del cual quiere conocer su factorial"<<endl;
cin>>x;
b = factorial(x);
cout<<"El factorial de "<<x<<" es "<<b<<endl;

}

int factorial(int a)
{

int b=1;

    for(int i=1;i<=a;i++)
    {
       
     b=b*i;
    
    }
       
return b;

}