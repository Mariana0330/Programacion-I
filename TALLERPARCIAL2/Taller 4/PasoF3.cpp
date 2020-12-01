#include <iostream>
#include <math.h>

using namespace std;

//Desarrolle una función que calcule la distancia euclidiana entre dos puntos.

 float eucl(float x1, float y1, float x2, float y2, float d);

 int main()
 {
    float x1, x2, y1, y2, d;
    d = eucl(x1, x2, y1, y2, d);
    cout<<"La distancia es "<<d;
 }

    float eucl(float x1, float y1, float x2, float y2, float d)
    {

    cout<<"Hola, usuario. Este es un programa para calcular la distancia entre dos puntos"<<endl;
    cout<<"Ingrese X del primer punto (X1)"<<endl;
    cin>>x1;
    cout<<"Ingrese Y del primer punto (Y1)"<<endl;
    cin>>y1;
    cout<<"Ingrese X del segundo punto (X2)"<<endl;
    cin>>x2;
    cout<<"Ingrese Y del segundo punto (Y2)"<<endl;
    cin>>y2;
    d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return d;

    }