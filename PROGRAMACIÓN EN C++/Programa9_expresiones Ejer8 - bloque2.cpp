/*EXPRESIONES - BLOQUE 2
Ejercicio 8
Escriba un programa que lea de la entrada est�ndar los dos catetos de un tri�ngulo rect�ngulo y escriba en la salida est�ndar
su hipotenusa*/

#include <iostream>
using namespace std;

int main(){
    float cateto1, cateto2, hipotenusa = 0;

    cout<<"Ingrese valor de cateto 1: "<<endl;
    cin>>cateto1;
    cout<<"Ingrese valor de cateto 2: "<<endl;
    cin>>cateto2;

    hipotenusa = cateto1 + cateto2;

    cout<<"\nEl resultado de la hipotenusa es de: "<<hipotenusa<<endl;

    return 0;
}
