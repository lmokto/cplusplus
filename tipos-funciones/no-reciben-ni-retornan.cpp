//http://codigoc.org/541-tipos-de-funciones-en-c
//Creamos una funcion que
//NO RECIBEN NI RETORNAN DATOS

/*ejemplo de como crear una funcion*/
//tipo nombre(){}
//el tipo se refiere  al tipo de dato(int, float, void, char)
//en las funciones que no RETORNAN DATOS siempre es VOID

#include <iostream>
using namespace std;

void sumar(){
    int num1, num2, r;
    cout << "numero 1: "; cin >> num1;
    cout << "numero 2: "; cin >> num2;
    r = num1 + num2;
    cout << "la suma es " << r;
}

int main(){
    sumar(); //invocamos la funcion
}