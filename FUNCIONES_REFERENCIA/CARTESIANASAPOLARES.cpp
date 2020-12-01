#include <iostream>
#include <math.h>
#define PI 3.14159265
using namespace std;

void funcionpasoReferencia(float entrada1,float entrada2, float &salida1, float &salida2);


int main()
{

    float entrada1,entrada2,sal1,sal2;

    funcionpasoReferencia(entrada1,entrada2,sal1,sal2);
    cout<<"r = "<<sal1<<endl;
    cout<<"Tetha = "<<sal2<<" grados"<<endl;

}
void funcionpasoReferencia(float entrada1,float entrada2, float &salida1, float &salida2)
{
    cout<<"Este programa sirve para convertir de coordenadas cartesianas a polares"<<endl;
    cout<<"Ingrese x"<<endl;
    cin>>entrada1;
    cout<<"Ingrese y"<<endl;
    cin>>entrada2;
    salida1 = sqrt((entrada1*entrada1+entrada2*entrada2));
    salida2 = atan (entrada2/entrada1) * 180 / PI ;

       
}