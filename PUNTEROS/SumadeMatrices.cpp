#include <iostream>

using namespace std;

int main()
{
    int  tamano;
    cout<<"Ingrese el tamano de las matrices"<<endl;
            cin>>tamano;
            
            float arregloA[tamano][tamano],arregloB[tamano][tamano];
            float *parregloA = &arregloA[0][0];
            float *parregloB = &arregloB[0][0];

            
            for (int i = 0; i < tamano; i++)
            {
                for (int j=0; j < tamano; j++)
                {
                    cout<<"Ingrese la posicion i,j desde 0,0 hasta n,n de la primera matriz A"<<endl;
                    cin>>parregloA[i*tamano + j];
                    
                }
            }
            for (int i = 0; i < tamano; i++)
            {
                for (int j=0; j < tamano; j++)
                {
                    cout<<"Ingrese la posicion i,j desde 0,0 hasta n,n de la segunda matriz B"<<endl;
                    cin>>parregloB[i*tamano + j];
                    
                }
            }
            cout<<"La suma de las matrices es:"<<endl;
            for (int i = 0; i < tamano; i++)
            {
                for (int j=0; j < tamano; j++)
                {
                   cout<< parregloA[i*tamano + j] + parregloB[i*tamano + j]<<" ";
                    
                    
                }cout<<endl;
            }
    

    return 0;
}