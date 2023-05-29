/*EXPRESIONES - BLOQUE 2
Ejercicio 6
Escribe un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos*/

#include <iostream>
using namespace std;

int main(){

    float alumno1, alumno2, alumno3, alumno4, notafinal = 0;

    cout<<"Ingrese la nota final del alumno 1: "<<endl;
    cin>>alumno1;
    cout<<"Ingrese la nota final del alumno 2: "<<endl;
    cin>>alumno2;
    cout<<"Ingrese la nota final del alumno 3: "<<endl;
    cin>>alumno3;
    cout<<"Ingrese la nota final del alumno 4: "<<endl;
    cin>>alumno4;

    notafinal = (alumno1 + alumno2 + alumno3 + alumno4) / 4;

    cout<<"\nLa nota final media de los cuatro alumnos es de: "<<notafinal<<endl;

    return 0;
}
