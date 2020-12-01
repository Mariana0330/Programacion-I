#include <iostream>
using namespace std;

void funcionpasoReferencia(double entrada1,double &salida1, double &salida2);


int main()
{

    double entrada1,sal1,sal2;

    funcionpasoReferencia(entrada1,sal1,sal2);
    cout<<"Dolares = "<<sal1<<endl;
    cout<<"Euros = "<<sal2<<endl;

}
void funcionpasoReferencia(double entrada1,double &salida1, double &salida2)
{
    cout<<"Este programa sirve para calcular el equivalente de pesos a dolares y a euros, digite el valor en pesos"<<endl;
    cin>>entrada1;
    salida1 = entrada1*0.00027;
    salida2 = entrada1*0.00023;

       
}