/*INTRODUCCION Y ENTRADA/SALIDA
EJERCICIO 1 (4.Programación en C++)
Escribe un programa que lea de la entrada estándar dos números y muestre en la salida estándar su suma, resta,
multiplicacion y división.*/

#include <iostream>
using namespace std;
int main(){

//Se hacen las variables y se solicita que se digitalize el valor
    int n1, n2, suma = 0, resta = 0, multiplicacion = 0, division = 0; //se pueden poner muchas variables en la misma linea siempre y cuando se separen con comas (,).
    cout<<"Digite primer numero: ";
    cin>>n1;
    cout<<"Digite segundo numero: ";
    cin>>n2;

//Se hace el codigo con las intrucciones para cada variable
    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;

//Se imprime en pantalla
    cout<<"La suma es: "<<suma<<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"La multiplicacion es: "<<multiplicacion<<endl;
    cout<<"La division es: "<<division<<endl;

    return 0;

}
