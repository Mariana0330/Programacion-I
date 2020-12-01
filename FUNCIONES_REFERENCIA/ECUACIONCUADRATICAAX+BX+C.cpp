#include <iostream>
#include <math.h>
using namespace std;
float a=1,b=3,c=1;
void funcionpasoReferencia(float entrada, float &salida1, float &salida2);


int main()
{

    float entrada1,sal1,sal2,sal3;

    funcionpasoReferencia(entrada1,sal1,sal2);

    cout<<"Este programa calcula las raices de una ecuacion cuadratica de la forma a*x^2 +b*x + c = 0, en este caso a=1,b=3,c=1."<<endl;

    cout<<"X1 = "<<sal1<<", X2 = "<<sal2<<endl;
    

}
void funcionpasoReferencia(float entrada, float &salida1, float &salida2)
{
    salida1 = (-b/2*a)+((sqrt(b*b-4*a*c))/2*a);
    salida2 = (-b/2*a)-((sqrt(b*b-4*a*c))/2*a);
}