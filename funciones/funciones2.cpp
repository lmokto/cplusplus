//FUnciones 2
// IMPORTANDO LIBRERIA
#include <iostream>
using namespace std;
//
// DECLARANDO FUNCIONES PROTOTIPOS
double Suma (double x, double y);
double Producto (double x, double y);
//
// PROGRAMA PRINCIPAL
int main (void){
    //definiendo variables
    double a, b;
    int c;
    //recibiendo parametros a cada variable
    cout << " escribe un numero " << endl;
    cin >> a;
    cout << " escribe otro numero " << endl;
    cin >> b;
    cout << " que operacion desea hacer 1(suma) o 2(producto)" << endl;
    cin >> c;
    //
    if (c==1){
        cout << " el resultado de la suma es: "<< Suma(a,b) << endl;
    } else {
        cout << " el resultado del producto es: "<< Producto(a,b) << endl;
    }
    return 0;
}
//
// Definimos las funciones prototipos.
double Suma(double x, double y){
    double z;
    z = x + y;
    return z;
}
//
double Producto(double x, double y){
    return (x*y);
}