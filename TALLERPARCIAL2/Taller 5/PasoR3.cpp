#include <iostream>
#include <math.h>

using namespace std;

//Desarrolle una función que convierta coordenadas rectangulares (x,y) de un punto en forma polar (r,teta).

void rt(float &x, float &y, float &r, float &t);

int main()
{
    float x, y, r, t;
    rt(x, y, r, t);
    cout<<"Sus coordenadas rectangulares ("<<x<<", "<<y<<") "<<"en forma polar son ("<<r<<", "<<t<<")"<<endl;
}

void rt(float &x, float &y, float &r, float &t)
{
    cout<<"Ingrese X y Y para transformarlos en r, tetha"<<endl;
    cout<<"Primero ingrese x"<<endl;
    cin>>x;
    cout<<"Ahora ingrese y"<<endl;
    cin>>y;
    r=sqrtf((x*x)+y*y);
    t=atanf(y/x);
}