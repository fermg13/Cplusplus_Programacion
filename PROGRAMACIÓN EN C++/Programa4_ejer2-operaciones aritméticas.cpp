/*INTRODUCCION Y ENTRADA/SALIDA
EJERCICIO 2 (4.Programación en C++)
Escribe un programa que lea de la entrada estándar el precio de un producto y muestre en la salida entándar el precio
del producto al aplicarle el IVA*/

#include <iostream>
using namespace std;

int main(){
    int manzana = 3, naranja = 4, pera = 2 , sandia = 10;
    float iva = 1.12;
    cout<<"El precio de la manzana es: "<<manzana<<endl;
    cout<<"El precio de la naranja es: "<<naranja<<endl;
    cout<<"El precio de la pera es: "<<pera<<endl;
    cout<<"El precio de la sandia es: "<<sandia<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Con el IVA incluido el valor es: "<<endl;
    cout<<"Manzana: "<<manzana / iva<<endl;
    cout<<"Naranja: "<<naranja / iva<<endl;
    cout<<"Pera: "<<pera / iva<<endl;
    cout<<"Sandia: "<<sandia / iva<<endl;

    return 0;
}
