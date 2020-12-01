#include <iostream>

using namespace std;

int main()
{
    int arreglo1[10],nums;

    for(int i=0; i<10;i++)
    {
        cout<<"Ingrese el numero "<<i+1<<endl;
        cin>>nums;
        arreglo1[i]=nums;
        
    }
    cout<<"Sus datos ingresados son:"<<endl;
    for(int i = 0 ; i<10 ;i++)
    {
        cout<<arreglo1[i]<<"  ";  
    }
    
    
    
}