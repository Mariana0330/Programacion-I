#include <iostream>
#include <time.h>
using namespace std;

//Desarrolle un programa que llene un arreglo de una dimensión con números aleatorios

int main() 
{

int arreglo1 [10];
srand(time(NULL));


    for (int i=0; i<10; i++)
        {

        arreglo1[i]=rand();
        cout<<arreglo1[i]<<endl;

        }

}