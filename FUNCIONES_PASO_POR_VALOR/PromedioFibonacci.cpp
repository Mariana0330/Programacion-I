#include <iostream>
#include <math.h>

using namespace std;

float Fibo(float num);
int main()
{
    float num;
    num=Fibo(num);
    cout<<"el promedio es: "<<num;

}
float Fibo(float num=0)
{
   
    float n, sumatoria,serie=1.0,x=0.0,suma=1.1;
    cout<<"programa que calcula promedio de n primeros numeros de fibonacci"<<endl;
    cout<<"Digite el numero n, entiendase por el tope"<<endl;
    cin>>n;
    for(int i=1; i<=(n-2) ;i++)
    {
       
        suma=x+serie;
        sumatoria=suma++;
        x=serie;
        serie=suma;
        
    }
    sumatoria=sumatoria+1;
    num=sumatoria/n;

    return num;


}