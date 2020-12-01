#include <iostream>
#include <math.h>
#define PI 3.14159265
using namespace std;

float fun(float radio,float area);
int main()
{
    float radio,area;
    area= fun(radio,area);
    cout<<"El area del circulo es:"<<area<<endl;
    

    return 0;
}

float fun(float radio,float area)
{
    cout<<"Digite el radio"<<endl;
    cin>>radio;
    area = PI*radio*radio;
    return area;

}