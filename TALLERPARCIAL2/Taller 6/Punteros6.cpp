#include <iostream>

using namespace std;

/*Llenar un arreglo con los números impares del 0 a N 
y mostrar a cuanto equivale la suma de todos los valores.*/

int main ()
{
    int num, arreglo[]={num}, suma;
    int *parreglo=&arreglo[0];

    cout<<"Este es un programa para calcular la suma de los numeros impares desde el 0 hasta un numero ingresado por usted."<<endl;
    cout<<"Por favor, ingrese el numero hasta donde quiere que llegue la suma"<<endl; 
    cin>>num; 

    for (int i=0;i<=num;i++)
    {
        if(i % 2 > 0)
        {
           parreglo[num]=arreglo[num]+i;
           suma=parreglo[num];
        }
        
    }
    
    cout<<"El valor de la suma de los numeros impares hasta el numero "<<num<<" es: "<<suma<<endl; 
}