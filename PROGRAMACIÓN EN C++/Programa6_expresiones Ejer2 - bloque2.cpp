/*EXPRESIONES - BLOQUE 2
Ejercicio 2
1. Escribe la siguiente expresion matematica como expresion en C++: a+b / c+d*/

#include <iostream>
using namespace std;

int main(){
    float a, b, c, d, resultado = 0;

    cout<<"Digite el valor a: "<<endl;
    cin>>a;
    cout<<"Digite el valor b: "<<endl;
    cin>>b;
    cout<<"Digite el valor c: "<<endl;
    cin>>c;
    cout<<"Digite el valor d: "<<endl;
    cin>>d;

    resultado = (a+b) / (c+d);

    cout.precision(3);
    cout<<"\nEl resultado es: "<<resultado<<endl;

    return 0;
}
