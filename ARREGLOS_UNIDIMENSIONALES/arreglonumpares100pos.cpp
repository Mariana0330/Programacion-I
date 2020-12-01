#include <iostream>

using namespace std;

int main()
{
    int arreglo5[100];
    for(int i=0 ; i<51 ;i++)
    {
        arreglo5[i]=i*2;
    }
    cout<<endl<<endl<<endl;
    for (int i = 0; i < 51 ; i++)
    {
        cout<<arreglo5[i]<<"  ";
    }
    

    return 0;
}