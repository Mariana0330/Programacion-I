#include <iostream>
#include <string>
using namespace std;

/*Desarrolle una estructura estudiante, que contenga nombre, edad,
documento de identidad y semestre académico.*/

struct estudiante 
{
    string nombre;
    int edad, documento, semestre;
};

int main() 
{

    estudiante x;
    x.nombre="Mariana Henao Bedoya";
    x.edad=18;
    x.documento=1004519804;
    x.semestre=4;

    cout<<"El nombre es "<<x.nombre<<endl;
    cout<<"La edad es "<<x.edad<<endl;
    cout<<"El documento de identidad es "<<x.documento<<endl;
    cout<<"Esta cursando el semestre numero "<<x.semestre<<endl;

}