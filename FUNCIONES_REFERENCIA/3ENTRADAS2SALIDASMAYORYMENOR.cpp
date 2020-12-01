#include <iostream>
using namespace std;

void funcionpasoReferencia(float entrada1,float entrada2,float entrada3, float &salida1, float &salida2);


int main()
{

    float entrada1,entrada2,entrada3,sal1,sal2;

    funcionpasoReferencia(entrada1,entrada2,entrada3,sal1,sal2);
    cout<<"El numero mayor es "<<sal1<<endl;
    cout<<"El numero menor es "<<sal2<<endl;

}
void funcionpasoReferencia(float entrada1,float entrada2,float entrada3, float &salida1, float &salida2)
{
    cout<<"Este programa calcula el numero mayor y menor de 3 numeros, digitelos"<<endl;
    cin>>entrada1;
    cin>>entrada2;
    cin>>entrada3;
    if (entrada1>entrada2 & entrada1>entrada3)
        {
        salida1=entrada1; 
        }
    if (entrada2>entrada1 & entrada2>entrada3)
        {
        salida1=entrada2; 
        }
    if (entrada3>entrada2 & entrada3>entrada1)
        {
        salida1=entrada3; 
        }
    if (entrada1<entrada2 & entrada1<entrada3)
        {
        salida2=entrada1; 
        }
    if (entrada2<entrada1 & entrada2<entrada3)
        {
        salida2=entrada2; 
        }
    if (entrada3<entrada2 & entrada3<entrada1)
        {
        salida2=entrada3; 
        }
       
}