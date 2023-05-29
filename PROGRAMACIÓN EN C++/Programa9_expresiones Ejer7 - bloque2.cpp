/*EXPRESIONES - BLOQUE 2
Ejercicio 7
La calificacion final de un estudiante es la media ponderada de tres notas:
La nota de practicas que cuenta con un 30% del total.
La nota teórica que cuenta con un 60%.
La nota de participación que cuenta con un 10% restante.

Escriba un programa que lea de la entrada estándar las tres notas de un alumno y escriba en la salida estándar su nota final.*/

#include <iostream>
using namespace std;

int main(){

    float npractica, nteorica, nparticipacion, notaFinal = 0;

    cout<<"Digite la nota de practica: "<<endl;
    cin>>npractica;
    cout<<"Digite la nota de teorica: "<<endl;
    cin>>nteorica;
    cout<<"Digite la nota de participacion: "<<endl;
    cin>>nparticipacion;

    npractica *= 0.30; //npractica = npractica * 0.30 - Se puede usar de ambas formas pero para no hacer tan larga la instruccion se usa *=.
    nteorica *= 0.60;
    nparticipacion *= 0.10;

    notaFinal = npractica + nteorica + nparticipacion;

    cout<<"\nLa nota final es: "<<notaFinal<<endl;

    return 0;
}

