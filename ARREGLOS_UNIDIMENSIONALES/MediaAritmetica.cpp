#include <iostream>

using namespace std;

int main()
{
    float n,arreglo1[5000],num,guar;
    cout<<"ingrese la cantidad de numeros"<<endl;
    cin>>n;
    for(int i=0 ; i<n ;i++)
    {
        cout<<"ingrese el numero "<<i+1<<endl;
        cin>>arreglo1[i];
        guar=guar+arreglo1[i];
    }
    cout<<"la media aritmetica es: "<<guar/n<<endl;
    
    
    

    return 0;
}