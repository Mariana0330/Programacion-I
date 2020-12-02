#include <iostream>

using namespace std;

/*La Mediana en Estadística es un indicador que se obtiene de la siguiente
forma. Se toman los N datos, a los que se les desea calcular la mediana en
orden ascendente. Si el número de datos N es impar, se toma el dato de la
mitad. Por ejemplo: la secuencia 4; 1; 3, ordenada queda 1; 3; 4 y su mediana
es el valor de la mitad 3. Cuando la cantidad de datos es par, no hay un único
valor en la mitad. Por ejemplo la secuencia 3; 2; 6; 1 ordenada queda 1; 2; 3;
6 y los valores de la mitad serán 2 y 3, la mediana se toma como el promedio
de los dos valores de la mitad, entonces queda (2+3)/2 = 2,5. Desarrolle una
función usando paso por puntero que calcule la mediana de un arreglo de
tamaño n.*/

void mediana(float *parregloA, int n);

int main()
{

int n;
cout<<"Digite la cantidad de numeros que desea ingresar"<<endl;
cin>>n;
float arregloA[n];

mediana(&arregloA[0], n);


}

void mediana(float *parregloA, int n)
{

    for (int i=1; i<=n; i++)
        {
            cout<<"Ingrese el numero "<<i<<endl;
            cin>>parregloA[i];
        
        }

        for (int i=1; i<=n-1; i++) //Este for es para ordenar los numeros de forma ascendente
        {
            for (int j=1; j<=n-1; j++) 
            {
                if (parregloA[j]>parregloA[j+1]) 
                {
                    int orden;
                    orden=parregloA[j];
                    parregloA[j]=parregloA[j+1];
                    parregloA[j+1]=orden;
                }
            }
        }

        cout<<endl<<"Los numeros ordenados de forma ascendente son: "<<endl;
        for(int i=1; i<=n; i++)//Este for muestra los numeros organizados  de forma ascendente
        {
            cout<<parregloA[i]<<" ";
        }  
    
        if (n % 2 == 0)//este if es para sacar la mediana cuando n es par
            {
          
                cout<<endl<<"La mediana es "<<(parregloA[n/2]+parregloA[(n/2)+1])/2;

            }
    
        if (n % 2 != 0)//este if es para sacar la mediana cuando n es impar
            {
          
                cout<<endl<<"La mediana es "<<parregloA[(n+1)/2];

            }

}
