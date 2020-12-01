#include <iostream>

using namespace std;
float calculo(float r1, float r2, float r3, float f, float i, float v);

int main()
{

float r1, r2, r3, f, i, v;
i=calculo(r1, r2, r3, f, i, v);
cout<<"La corriente total del circuito es "<<i<<endl;

}

    float calculo(float r1, float r2, float r3, float f, float i, float v)
    {
        int a, b;
        cout<<"Hola, usuario. Su circuito esta en serie o en paralelo?"<<endl;
        cout<<"Digite el numero pedido para el tipo de circuito que tenga"<<endl<<"1. Serie"<<endl<<"2. Paralelo"<<endl;
        cin>>a;     
        if (a==1)
        {
            cout<<"Serie."<<endl<<"Ahora ingrese los valores de las resistencias"<<endl;
            cout<<"R1"<<endl;
            cin>>r1;
            cout<<"R2"<<endl;
            cin>>r2;
            cout<<"R3"<<endl;
            cin>>r3;
            cout<<"Ahora ingrese el valor de la fuente"<<endl;
            cin>>f;
            v=f;
            i=f/(r1+r2+r3);
            cout<<"El valor del voltaje total del circuito es "<<v<<endl;
            return i;

        }

        if (a==2)
        {
            cout<<"Paralelo."<<endl<<"Ahora ingrese los valores de las resistencias"<<endl;
            cout<<"R1"<<endl;
            cin>>r1;
            cout<<"R2"<<endl;
            cin>>r2;
            cout<<"R3"<<endl;
            cin>>r3;
            cout<<"Ahora ingrese el valor de la fuente"<<endl;
            cin>>f;
            v=f;
            i=f/(1/((1/r1)+(1/r2)+(1/r3)));
            cout<<"El valor del voltaje total del circuito es "<<v<<endl;
            return i;

        }

        if(a!=1 or a!= 2)
        {
            cout<<"Opcion no valida"<<endl;
            
        }

        return i;

    }