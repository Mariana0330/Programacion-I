#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float n,arreglo1[5000],sumatoria,guar,media,a,b;
    cout<<"ingrese la cantidad de numeros"<<endl;
    cin>>n;
    for(int i=0 ; i<n ;i++)
    {
        cout<<"ingrese el numero "<<i+1<<endl;
        cin>>arreglo1[i];
        guar=guar+arreglo1[i];
    }
    
    cout<<"la media aritmetica es: "<<guar/n<<endl;
    media=(guar/n);
    for(int i=0 ; i<n ;i++)
    {
        sumatoria = sumatoria + pow((arreglo1[i]-media),2);
    }
    a=(n-1);
    b=(sqrt(sumatoria/a));
    cout<<"La desviacion estandar es :"<<b<<endl;


    
    

    return 0;
}