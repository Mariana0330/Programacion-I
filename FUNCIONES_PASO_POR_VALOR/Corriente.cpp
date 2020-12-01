#include <iostream>

using namespace std;

float fun(float t,float r);
int main()
{
    float t,r,corriente;
    cout<<"Ingrese el valor de la tension"<<endl;
    cin>>t;
    cout<<"Ingrese el valor de la resistencia"<<endl;
    cin>>r;
    corriente=fun(t,r);
    cout<<"La corriente es igual a: "<<corriente<<endl;
    
    

    return 0;
}

float fun(float t,float r)
{
    float corriente=0;
    corriente=(t/r);

    return corriente;
}
