/*INTRODUCCION Y ENTRADA/SALIDA
EJERCICIO 3 - PEDIR DATOS AL USUARIO Y MOSTRARLOS EN PANTALLA (5.Programaci�n en C++)
Realice un programa que lea de la entrada est�ndar los siguientes datos de una persona:

Edad: dato de tipo entero (int)
Sexo: dato de tipo car�cter (char)
Altura en metros: dato de tipo real (float)

Tras leer los datos, el programa debe mostrarlos en la salida est�ndar.*/

#include <iostream>
using namespace std;

int main(){
    int edad;
    char sexo[10]; //con char solo se lee un car�cter, entonces para que se lean varios se puede poner [el numero de caracteres que se quieran].
    float altura;

    cout<<"Digite su edad: ";
    cin>>edad;
    cout<<"Digite su sexo: ";
    cin>>sexo;
    cout<<"Digite su altura en metros: "; cin>>altura;

    cout<<"\nEdad: "<<edad<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Altura en metros: "<<altura<<endl;

    return 0;

}
