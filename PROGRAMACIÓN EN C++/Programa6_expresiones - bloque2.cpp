/*EXPRESIONES
Inicio de bloque 2 curso c++ - Expresiones Ejercicio 1
1. Escribe la siguiente expresion como expresion en C++: a/b + 1*/

#include <iostream>
using namespace std;

int main(){
    float a, b, resultado = 0;

    cout<<"Digite el valor de a: "<<endl;
    cin>>a;
    cout<<"Digite el valor de b: "<<endl;
    cin>>b;

    resultado = (a/b) + 1;

    cout.precision(2); //Si es resultado de la expresion es de muchos decimales esta instruccion hace que se redondeen a la cantidad que esta en parentesis.

    cout<<"\nEl resultado es: "<<resultado<<endl;

    return 0;

}
