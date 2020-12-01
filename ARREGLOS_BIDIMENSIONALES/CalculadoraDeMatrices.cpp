#include <iostream>

using namespace std;

int main()
{
    int  n,tamano,nums;
    
    cout<<"Calculadora de matrices cuadradras"<<endl;
    cout<<"1.suma"<<endl;
    cout<<"2.resta"<<endl;
    cout<<"3.multiplicacion"<<endl;
    cout<<"4.transpuesta"<<endl;
    cout<<"5.multiplicacion por escalar"<<endl;
    cin>>n;

    switch (n)
    {
    case 1:
        {
            
            cout<<"Ingrese el tamano de las matrices"<<endl;
            cin>>tamano;
            
            float arregloA[tamano][tamano],arregloB[tamano][tamano];
            for (int i = 0; i < tamano; i++)
            {
                for (int j=0; j < tamano; j++)
                {
                    cout<<"Ingrese la posicion i,j desde 0,0 hasta n,n de la primera matriz A"<<endl;
                    cin>>arregloA[i][j];
                    
                }
            }
            for (int i = 0; i < tamano; i++)
            {
                for (int j=0; j < tamano; j++)
                {
                    cout<<"Ingrese la posicion i,j desde 0,0 hasta n,n de la segunda matriz B"<<endl;
                    cin>>arregloB[i][j];
                    
                }
            }
            cout<<"La suma de las matrices es:"<<endl;
            for (int i = 0; i < tamano; i++)
            {
                for (int j=0; j < tamano; j++)
                {
                   cout<< arregloA[i][j] + arregloB[i][j]<<" ";
                    
                    
                }cout<<endl;
            }
            
        }
        break;
    case 2:
        {
            
            cout<<"Ingrese el tamano de las matrices"<<endl;
            cin>>tamano;
            
            float arregloA[tamano][tamano],arregloB[tamano][tamano];
            for (int i = 0; i < tamano; i++)
            {
                for (int j=0; j < tamano; j++)
                {
                    cout<<"Ingrese la posicion i,j desde 0,0 hasta n,n de la primera matriz A"<<endl;
                    cin>>arregloA[i][j];
                    
                }
            }
            for (int i = 0; i < tamano; i++)
            {
                for (int j=0; j < tamano; j++)
                {
                    cout<<"Ingrese la posicion i,j desde 0,0 hasta n,n de la segunda matriz B"<<endl;
                    cin>>arregloB[i][j];
                    
                }
            }
            cout<<"La resta de las matrices es:"<<endl;
            for (int i = 0; i < tamano; i++)
            {
                for (int j=0; j < tamano; j++)
                {
                   cout<< arregloA[i][j] - arregloB[i][j]<<" ";
                    
                    
                }cout<<endl;
            }
            
        }
        break;
        case 3:
        {
            
            cout<<"Ingrese el tamano de las matrices"<<endl;
            cin>>tamano;
            
            float arregloA[tamano][tamano],arregloB[tamano][tamano],arregloC[tamano][tamano];
            for (int i = 0; i < tamano; i++)
            {
                for (int j=0; j < tamano; j++)
                {
                    cout<<"Ingrese la posicion i,j desde 0,0 hasta n,n de la primera matriz A"<<endl;
                    cin>>arregloA[i][j];
                    
                }
            }
            for (int i = 0; i < tamano; i++)
            {
                for (int j=0; j < tamano; j++)
                {
                    cout<<"Ingrese la posicion i,j desde 0,0 hasta n,n de la segunda matriz B"<<endl;
                    cin>>arregloB[i][j];
                    
                }
            }
            
            for (int i = 0; i < tamano; i++)
            {
                for (int j=0; j < tamano; j++)
                {
                    arregloC[i][j] = 0;
                   for (int k=0; k < tamano; k++)
                   {
                       arregloC[i][j] = arregloC[i][j] + (arregloA[i][k]*arregloB[k][j]);
                   }
                    
                    
                }cout<<endl;
            }
            cout<<"El resultado de la multiplicacion es: "<<endl;
            for (int i = 0; i < tamano; i++)
            {
                for (int j=0; j < tamano; j++)
                {
                   cout<<arregloC[i][j]<<" ";
                    
                    
                }cout<<endl;
            }

        }
        

        break;
        case 4:
        {
            
            cout<<"Ingrese el tamano de las matrices"<<endl;
            cin>>tamano;
            
            float arregloA[tamano][tamano],arregloB[tamano][tamano];
            for (int i = 0; i < tamano; i++)
            {
                for (int j=0; j < tamano; j++)
                {
                    cout<<"Ingrese la posicion i,j desde 0,0 hasta n,n de la primera matriz A"<<endl;
                    cin>>arregloA[i][j];
                    
                }
            }
            
            cout<<"La transpuesta de la matriz es:"<<endl;
            for (int i = 0; i < tamano; i++)
            {
                for (int j=0; j < tamano; j++)
                {
                   cout<<arregloA[j][i]<<" ";
                    
                    
                }cout<<endl;
            }
            
        }
        break;
        case 5:
        {
            
            cout<<"Ingrese el tamano de las matrices"<<endl;
            cin>>tamano;
            float arregloA[tamano][tamano],arregloB[tamano][tamano],escalar;
            cout<<"Ingrese el escalar"<<endl;
            cin>>escalar;
            for (int i = 0; i < tamano; i++)
            {
                for (int j=0; j < tamano; j++)
                {
                    cout<<"Ingrese la posicion i,j desde 0,0 hasta n,n de la primera matriz A"<<endl;
                    cin>>arregloA[i][j];
                    
                }
            }
            
            cout<<"La multiplicacion por escalar es:"<<endl;
            for (int i = 0; i < tamano; i++)
            {
                for (int j=0; j < tamano; j++)
                {
                   cout<< arregloA[i][j]*escalar<<" ";
                    
                    
                }cout<<endl;
            }
            
        }
        break;
        default:

        cout<<"Opcion invalida, intentelo nuevamente"<<endl;
       
        break;
    
    }
    

    

    return 0;
}