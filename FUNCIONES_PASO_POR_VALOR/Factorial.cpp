#include <iostream>

using namespace std;

int factorial(int n);
int main()
{
    int respuesta,num;
    cout<<"Ingrese el numero al cual desea saber su factorial"<<endl;
    cin>>num;
    respuesta = factorial(num);


    cout<<"el factorial de "<<num<<" es "<<respuesta;
    

    return 0;
}

int factorial(int n)
{
    int respuesta=1;
    for (int i=1; i<=n;i++)
    {
    respuesta = respuesta*i;
    

    }
    return respuesta;
}
