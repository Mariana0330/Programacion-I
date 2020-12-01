#include <iostream>

using namespace std;

int main()
{
    int  n=4,disponibles=0,motos=0,sedan=0,camioneta=0,vehiculo,a,b;
    int  arregloA[n][n]={{0,1,2,3},{3,2,1,0},{1,2,3,0},{2,3,0,1}};

    cout<<"Parqueadero JuanpaCaice"<<endl;
    
    for (int i=0;i<n;i++)
    {
        for (int j = 0; j<n; j++)
        {
            cout<<arregloA[i][j]<<" ";
        }cout<<endl;
    }
    for (int i=0;i<n;i++)
    {
        for (int j = 0; j<n; j++)
        {
            arregloA[i][j];
            if(arregloA[i][j]==0)
            {
                disponibles++;
            }
            if(arregloA[i][j]==1)
            {
                motos++;
            }
            if(arregloA[i][j]==2)
            {
                sedan++;
            }
            if(arregloA[i][j]==3)
            {
                camioneta++;
            }
    
        }
    }
    cout<<"espacios disponibles: "<<disponibles<<endl;
    cout<<"motos: "<<motos<<endl;
    cout<<"sedanes: "<<sedan<<endl;
    cout<<"camionetas: "<<camioneta<<endl;
    cout<<"elija su tipo de vehiculo"<<endl;
    cout<<"1.Moto"<<endl;
    cout<<"2.sedan"<<endl;
    cout<<"3.camioneta"<<endl;
    cin>>vehiculo;
    switch (vehiculo)
    {
    case 1 :
        {
            cout<<"Ingrese el lugar"<<endl;
            cin>>a;
            cin>>b;
            arregloA[a][b];
            if(arregloA[a][b]==0)
            {
                arregloA[a][b]=vehiculo;
                for (int i=0;i<n;i++)
                 {
                   for (int j = 0; j<n; j++)
                    {
                       cout<<arregloA[i][j]<<" ";
                      }cout<<endl;
                      }
            }
            else
            {
                cout<<"Espacio no disponible"<<endl;
            }
            

        }
        break;
    
    case 2 :
        {
            cout<<"Ingrese el lugar"<<endl;
            cin>>a;
            cin>>b;
            arregloA[a][b];
            if(arregloA[a][b]==0)
            {
                arregloA[a][b]=vehiculo;
                for (int i=0;i<n;i++)
                 {
                   for (int j = 0; j<n; j++)
                    {
                       cout<<arregloA[i][j]<<" ";
                      }cout<<endl;
                      }
            }
            else
            {
                cout<<"Espacio no disponible"<<endl;
            }
            

        }
        break;
    
    case 3 :
        {
            cout<<"Ingrese el lugar"<<endl;
            cin>>a;
            cin>>b;
            arregloA[a][b];
            if(arregloA[a][b]==0)
            {
                arregloA[a][b]=vehiculo;
                for (int i=0;i<n;i++)
                 {
                   for (int j = 0; j<n; j++)
                    {
                       cout<<arregloA[i][j]<<" ";
                      }cout<<endl;
                      }
            }
            else
            {
                cout<<"Espacio no disponible"<<endl;
            }
            

        }
        break;
        }
        

    return 0;




}