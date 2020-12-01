#include <iostream>
#include <math.h>
#define PI 3.14159265
using namespace std;

void funcionpasoReferencia(float entrada1,float &salida1, float &salida2);


int main()
{

    float entrada1,sal1,sal2;

    funcionpasoReferencia(entrada1,sal1,sal2);
    cout<<"El radio es = "<<sal1<<endl;
    cout<<"El area es = "<<sal2<<endl;
    cout<<"Las unidades son iguales a las de la cirfunferencia que digito"<<endl;
    cout<<"La exactitud del programa depende de que tan exacto sea el valor de circunferencia digitado";

}
void funcionpasoReferencia(float entrada1,float &salida1, float &salida2)
{
    cout<<"Este programa sirve para calcular el area y radio de un circulo dada su circunferencia. digite la circunferencia"<<endl;
    cin>>entrada1;
    salida1 = (entrada1)/(2*PI) ;
    salida2 = PI*salida1*salida1;

       
}