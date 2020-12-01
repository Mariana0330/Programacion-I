#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int arreglo1[10];
    srand(time(NULL));
for (int i = 0; i < 10 ; i++)
    {
        
        arreglo1 [i] = rand () %100;
        cout<<arreglo1[i]<<endl;
    }
    

    return 0;
}