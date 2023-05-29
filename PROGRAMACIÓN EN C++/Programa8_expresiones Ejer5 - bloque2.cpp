/*EXPRESIONES - BLOQUE 2
Ejercicio 5
Escribe un fragmento de programa que intercambie los valores de dos variables*/

#include <iostream>
using namespace std;

int main(){

    int x, y, aux;

    cout<<"Digite el valor de x: "<<endl;
    cin>>x;
    cout<<"Digite el valor de y: "<<endl;
    cin>>y;

    aux = x;
    x = y;
    y = aux;

    cout<<"\nEl nuevo valor de x es: "<<x<<endl;
    cout<<"El nuevo valor de y es: "<<y<<endl;

}
