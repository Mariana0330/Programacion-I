#include <iostream>

using namespace std;
struct estudiante
{
    string nombre;/*Creo todos los parametros que quiero evaluar*/
    int id;
    int edad;
    int semestre;


};
int main()
{
    estudiante x; /*Igualo a los valores que quiero que tenga la estructura*/
    x.nombre = "Juan Pablo";
    x.id = 1004778938;
    x.edad = 18;
    x.semestre = 4;

    cout<<"El nombre es: "<<x.nombre<<endl; /*Imprimo estos valores anteriores, para que el usuario los pueda visualizar*/
    cout<<"La identificacion es: "<<x.id<<endl;
    cout<<"La edad es: "<<x.edad<<endl;
    cout<<"El semestre es: "<<x.semestre<<endl;


    return 0;
}