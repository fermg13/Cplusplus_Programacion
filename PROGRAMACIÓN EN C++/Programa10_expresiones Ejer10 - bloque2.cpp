/*EXPRESIONES - BLOQUE 2
Ejercicio 10
Escriba un programa que calcule las soluciones de una ecuación de segundo grado de la forma ax^2+bx+c=0*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a, b, c, x1 = 0, x2 = 0;

    cout<<"Digite el valor de a: "<<endl;
    cin>>a;
    cout<<"Digite el valor de b: "<<endl;
    cin>>b;
    cout<<"Digite el valor de c: "<<endl;
    cin>>c;

    x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    x2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);

    cout<<"\nEl primer resultado es: "<<x1<<endl;
    cout<<"El segundo resultado es: "<<x2<<endl;

    return 0;
}

//(-b+sqrt(pow(b,2)-4*a*c))/(2*a) y (-b-sqrt(pow(b,2)-4*a*c))/(2*a)
