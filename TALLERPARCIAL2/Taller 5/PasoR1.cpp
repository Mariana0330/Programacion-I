#include <iostream>
#include <math.h>

using namespace std;

//Desarrollar un programa que calcule las raíces de una ecuación cuadrática de la forma a*x^2 +b*x + c = 0.

void funcioncuadratica(float a, float b, float c, float &salida1, float &salida2);

int main()
{
    float a, b, c, salida1, salida2;
    funcioncuadratica(a, b, c, salida1, salida2);
    cout<<"Sus raices son "<<salida1<<" y "<<salida2<<endl;

}
void funcioncuadratica(float a, float b, float c, float &salida1, float &salida2)
{
    cout<<"Hola, usuario. Este es un programa para calcular las raices de la ecuacion de la forma a*x^2 +b*x + c = 0"<<endl;
    cout<<"Ingrese a"<<endl;
    cin>>a;
    cout<<"Ingrese b"<<endl;
    cin>>b;
    cout<<"Ingrese c"<<endl;
    cin>>c;

    salida1 = (-b+sqrtf((b*b)-(4*a*c)))/2*a;
    salida2 = (-b-sqrtf((b*b)-(4*a*c)))/2*a;
    
    
}

