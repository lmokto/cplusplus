//http://codigoc.org/541-tipos-de-funciones-en-c
//Reciben y no Retornan.
//tipo de funcion que recibe parametros dentro de la funcion principal (main)
//Recibir es enviar datos del main a la función

#include <iostream>
using namespace std;

void sumar(int num1, int num2){
    int r;
    r = num1 + num2;
    cout << "La suma es " << r;
}

int main(){
    int num1, num2;
    cout << "Numero 1: "; cin >> num1;
    cout << "Numero 2: "; cin >> num2;
    sumar(num1, num2);
}