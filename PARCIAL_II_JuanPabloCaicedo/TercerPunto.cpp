#include <iostream>
using namespace std;
void ImprimirMediana(float *parreglo1, int nums);/*Creo la funcion donde se va a guardar todos lo calculos de la obtencion de la mediana*/
                    /*Parametros de entrada*/


int main() /**/
{
    int nums;
    cout<<"Digite la cantidad de numeros que desea ingresar"<<endl;
    cin>>nums;
    float arregloA[nums];
    ImprimirMediana(&arregloA[0], nums);
}
void ImprimirMediana(float *parreglo1, int nums) /*Se va atrabajar solamente con el puntero, y se van a realizar los calculos de la mediana*/
{

    for (int i=1; i<=nums; i++)/*Le pido al usuario que llene el arreglo*/
        {
            cout<<"Digite el numero "<<i<<endl;
            cin>>parreglo1[i];
        
        }
        cout<<"Los numeros ingresados son:"<<endl;/*Le muestro al usuario lo que ha digitado*/

    for (int i = 1; i <= nums; i++)
    {
        cout<<parreglo1[i]<<" ";
    }
    

    for (int i=1; i<=nums-1; i++) /*En esta parte, lo que hace el for es ir recorriendo posicion por posicion del arreglo y evaluando si es mayor, para ordenarlos de menor a mayor*/
    {
        for (int j=1; j<=nums-1; j++) 
        {
            if (parreglo1[j]>parreglo1[j+1]) 
            {
                int auxiliar;
                auxiliar = parreglo1[j];
                parreglo1[j] = parreglo1[j+1];
                parreglo1[j+1] = auxiliar;
            }
        }
    }cout<<endl;
    cout<<"Los numeros ordenados de forma ascendente son los siguientes: "<<endl;
    for(int i=1; i<=nums; i++)/*Le muestro al usuario el resultado del for anterior, o sea como quedan ordenados los numeros*/
    {
        cout<<parreglo1[i]<<" ";
    }  
    if (nums % 2 != 0)/*Cuando el numero de datos ingresados es impar, la mediana es el numero en medio,que hace referencia a este caso*/
    {
        cout<<endl<<"La mediana es "<<parreglo1[(nums+1)/2];
    }
    if (nums % 2 == 0)/*Cuando el numero de datos ingresados es par, la mediana es el promedio entre los dos numeros medios,que hace referencia a este caso*/
    {
        cout<<endl<<"La mediana es "<<(parreglo1[nums/2]+parreglo1[(nums/2)+1])/2;

    }
}