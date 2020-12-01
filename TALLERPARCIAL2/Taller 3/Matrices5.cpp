#include <iostream>
using namespace std;

/* -Desarrolle una calculadora de matrices que contenga las siguientes operaciones.
* Suma
* Resta
* Multiplicación
* Traspuesta.
* Multiplicación de una matriz por un escalar */

int main () 
{

cout<<"Hola, usuario. Esto es una calculadora de matrices"<<endl;
int a, n, contador1=0, contador2=0;
cout<<"Ingrese el tamano de la/las matriz/matrices nxn"<<endl;
cin>>n;
cout<<"Ahora ingrese el numero de la operacion que desee realizar"<<endl;
cout<<"1. Suma."<<endl<<"2. Resta."<<endl<<"3. Multiplicacion"<<endl<<"4. Matriz transpuesta."<<endl<<"5. * Multiplicacion de una matriz por un escalar"<<endl;
cin>>a;
int arregloA[n][n], arregloB[n][n], arregloC[n][n], arregloD[n][n], arregloE[n][n], arregloF[n][n], x=0;
int arregloG[n][n], arregloH[n][n], arregloI[n][n], arregloJ[n][n], arregloK[n][n];
    switch (a)  
    {
        case 1:
        
             for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                {
                cout<<"Ingrese el componente "<<contador1+1<<" de la primera matriz"<<endl;
                contador1++;
                cin>>arregloA[i][j];

                }
            }cout<<endl<<"Ahora la segunda matriz"<<endl;

              for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                {
                cout<<"Ingrese el componente "<<contador2+1<<" de la segunda matriz"<<endl;
                contador2++;
                cin>>arregloB[i][j];

                }
            }cout<<endl<<"Su primera matriz es:"<<endl;

            for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                { 
                cout<<arregloA[i][j]<<" ";

                }cout<<endl;
            }cout<<endl<<"Su segunda matriz es:"<<endl;

             for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                { 
                cout<<arregloB[i][j]<<" ";

                }cout<<endl;
            }

             for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                { 
                
                arregloC[i][j]= arregloA[i][j] + arregloB[i][j];

                }cout<<endl;
            }cout<<endl<<"La suma de las matrices es:"<<endl;

             for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                { 
                cout<<arregloC[i][j]<<" ";

                }cout<<endl;
            }

            break;

        case 2:
            

             for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                {
                cout<<"Ingrese el componente "<<contador1+1<<" de la primera matriz"<<endl;
                contador1++;
                cin>>arregloD[i][j];

                }
            }cout<<endl<<"Ahora la segunda matriz"<<endl;

              for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                {
                cout<<"Ingrese el componente "<<contador2+1<<" de la segunda matriz"<<endl;
                contador2++;
                cin>>arregloE[i][j];

                }
            }cout<<endl<<"Su primera matriz es:"<<endl;

            for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                { 
                cout<<arregloD[i][j]<<" ";

                }cout<<endl;
            }cout<<endl<<"Su segunda matriz es:"<<endl;

             for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                { 
                cout<<arregloE[i][j]<<" ";

                }cout<<endl;
            }

             for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                { 
                arregloF[i][j]= arregloD[i][j] - arregloE[i][j];

                }cout<<endl;
            }cout<<endl<<"La resta de las matrices es:"<<endl;

             for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                { 
                cout<<arregloF[i][j]<<" ";

                }cout<<endl;
            }
            break;
        
        case 3:
        
         for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                {
                cout<<"Ingrese el componente "<<contador1+1<<" de la primera matriz"<<endl;
                contador1++;
                cin>>arregloG[i][j];

                }
            }cout<<endl<<"Ahora la segunda matriz"<<endl;

              for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                {
                cout<<"Ingrese el componente "<<contador2+1<<" de la segunda matriz"<<endl;
                contador2++;
                cin>>arregloH[i][j];

                }
            }cout<<endl<<"Su primera matriz es:"<<endl;

            for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                { 
                cout<<arregloG[i][j]<<" ";

                }cout<<endl;
            }cout<<endl<<"Su segunda matriz es:"<<endl;

             for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                { 
                cout<<arregloH[i][j]<<" ";

                }cout<<endl;
            }

            
             for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                { 
                    
                    arregloI[i][j]=0;
                    for (int k=0; k<n; k++)
                    {

                        arregloI[i][j]= arregloG[i][k] * arregloH[k][j] + arregloI[i][j];

                    }

                }cout<<endl;
            }cout<<"La multiplicacion de las matrices es:"<<endl;      

             for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                { 
                    
                  cout<<arregloI[i][j]<<" ";
    

                }cout<<endl;
            }      
            
        break;
        
        case 4:

            for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                { 
                    
                cout<<"Ingrese el componente "<<contador1+1<<" de la matriz de la cual quiere conocer su traspuesta"<<endl;
                contador1++;
                cin>>arregloJ[i][j];
    

                }cout<<endl;
            }cout<<endl<<"Su matriz original es:"<<endl;

            for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                { 

                cout<<arregloJ[i][j]<<" ";

                }cout<<endl;
            }cout<<"Su matriz transpuesta es:"<<endl;

             for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                { 
                    
                    cout<<arregloJ[j][i]<<" ";
  
                }cout<<endl;
            }

        break;

        case 5:

            for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                { 
                    
                cout<<"Ingrese el componente "<<contador1+1<<" de la matriz que quiere multiplicar por un escalar"<<endl;
                contador1++;
                cin>>arregloK[i][j];
    

                }cout<<endl;
            }cout<<"Su matriz original es:"<<endl;

            for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                { 
                    
                cout<<arregloK[i][j]<<" ";

                }cout<<endl;
            }

            cout<<"Ahora ingrese el escalar por el cual quiere multiplicar la matriz"<<endl;
            cin>>x;

            for(int i=0;i<n;i++)
            {

                for (int j=0;j<n;j++)
                { 
                    
                cout<<arregloK[i][j]*x<<" ";

                }cout<<endl;
            }


        break;
            
        default:

        cout<<"Opcion invalida"<<endl;
       
        break;
    }

    
}