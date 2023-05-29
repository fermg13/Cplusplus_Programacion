/*EXPRESIONES - BLOQUE 2
Ejercicio 3
1. Escribe la siguiente expresion matematica como expresion en C++: a+b/c / d+e/f*/

#include <iostream>
using namespace std;

int main(){
    float a, b, c, d, e, f, resultado = 0;

    cout<<"Digite valor de a: "<<endl;
    cin>>a;
    cout<<"Digite valor de b: "<<endl;
    cin>>b;
    cout<<"Digite valor de c: "<<endl;
    cin>>c;
    cout<<"Digite valor de d: "<<endl;
    cin>>d;
    cout<<"Digite valor de e: "<<endl;
    cin>>e;
    cout<<"Digite valor de f: "<<endl;
    cin>>f;

    resultado = (a + (b/c)) / (d + (e/f));

    cout<<"\nEl resultado es: "<<resultado<<endl;

    return 0;


}
