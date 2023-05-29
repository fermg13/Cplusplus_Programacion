/*EXPRESIONES - BLOQUE 2
Ejercicio 9
Realice un programa que calcule el valor que toma la siguiente función para unos valores dados de x , y: f(x,y) = √x / y^2 - 1 */

#include <iostream>
#include <math.h> //Es la libreria matemática y trigonométrica de c++
using namespace std;

int main(){
    float x, y, resultado = 0;

    cout<<"Digite el valor de x: "<<endl;
    cin>>x;
    cout<<"Digite el valor de y: "<<endl;
    cin>>y;

    resultado = (sqrt(x))/(pow(y,2)-1); //sqrt: raiz cuadrada / pow: eleva el exponente.

    cout<<"\nEl resultado es: "<<resultado<<endl;

    return 0;
}
