#include <iostream>
#include <math.h>

using namespace std;

/*La descomposición de Cholesky es una clase especial de descomposición matricial LU, 
del inglés Lower-Upper, que consiste en la factorización de una matriz en el producto de dos o más matrices.*/

//A=LU=LL^t

int main()
{
cout<<"Ingrese el tamano de la matriz a la que le quiere aplicar la factorizacion de Cholesky"<<endl;
int n;
cin>>n; 
    while(n<=0)
    {
        cout<<"Ese no es un tamano permitido para la matriz"<<endl<<"Escriba un tamano mayor que 0"<<endl;
        cin>>n;
    }
float arregloA[n][n], arregloL[n][n], arregloLT[n][n], contador=0;
float sum1=0, sum2=0;

    for(int i=0;i<n;i++)
    {

        for (int j=0;j<n;j++)
        {
            cout<<"Ingrese el componente "<<contador+1<<" de la matriz (la matriz se llena por filas)"<<endl;
            contador++;
            cin>>arregloA[i][j];
        } 
    }

    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
           while(arregloA[i][j]!=arregloA[j][i])
           {
              cout<<"Su matriz no es simetrica"<<endl;
              cout<<"La triangular inferior y superior deben ser iguales"<<endl;
              cout<<endl<<"Su matriz es:"<<endl;
                for(int i=0;i<n;i++)
                {

                    for (int j=0;j<n;j++)
                    { 
                        cout<<arregloA[i][j]<<" ";
                    }cout<<endl;
                }
                cout<<"Ingrese el valor del item A"<<i+1<<j+1<<endl;
                cin>>arregloA[i][j];
           }
        } 
    }

    cout<<endl<<"Su matriz original es:"<<endl;
    for(int i=0;i<n;i++)
    {

        for (int j=0;j<n;j++)
        { 
            cout<<arregloA[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {

        for (int j=0;j<n;j++)
        { 
           if(i>j) //Se llena de ceros la triangular superior
		   {
				arregloL[j][i]=0;
		   }
	
		   if(i==j) //Se llena la diagonal principal
		   {
				for (int r=0; r<=i-1; r++)
				{
					if (i==0)
					{
						sum1=0;
					}
					
					sum1=((arregloL[i][r])*(arregloL[i][r]))+sum1;

                        if(arregloA[i][i]<sum1)
                        {
                            cout<<"La descomposicion de Cholesky no se puede realizar ya que la matriz no es definida positiva"<<endl;
                            return 0;
                        }    
				}
				arregloL[i][i]=sqrtf((arregloA[i][i])-sum1);	
		   }

	
		   if (j>i) //Se llena la triangular inferior
		   {
			
               for (int r=0; r<=i-1; r++)
				{
					if (i==0)
					{
						sum2=0;
					}

					sum2=((arregloL[i][r])*((arregloL[j][r])))+sum2;
				
				}  
                if(arregloL[i][i]==0)
                {
                    cout<<"La descomposicion de Cholesky no se puede realizar ya que la matriz no es definida positiva"<<endl;
                    return 0;
                }
				arregloL[j][i]=(1/arregloL[i][i])*(arregloA[i][j]-sum2);	
		        
           }
		    
        }
		sum1=0;
		sum2=0;
    }

	cout<<endl<<"Su matriz L es:"<<endl;
    for(int i=0;i<n;i++)
    {

        for (int j=0;j<n;j++)
        { 
            cout<<arregloL[i][j]<<" ";
        }cout<<endl;
    }

	cout<<endl<<"Su matriz LT es:"<<endl;
    for(int i=0;i<n;i++)
    {

        for (int j=0;j<n;j++)
        { 
            cout<<arregloL[j][i]<<" ";
        }cout<<endl;
    }        

}	