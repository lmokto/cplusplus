/*Bueno, casi creo que nunca he hablado de matrices, parámetros o funciones en este blog, pero este post es una petición de Rodrigo que me dijo por email que tenía problemas con su tarea porque no sabe cómo pasar una matriz como parámetro a una función en c++. Es algo sencillo, pero difícil de deducir. Veamos.

Si tu arreglo es de una dimensión?
int matriz[4];

? la forma de declarar la función es la siguiente:
void fx(int m[4]) { ...código... }

Y la forma de llamar la función sería:
fx(matriz);

Si el arreglo es de dos dimensiones?
int matriz[4][3];

? pues es lo mismo:
void fx(int m[4][3]) { ...código... }

Y la forma de llamar la función sería:
fx(matriz);

Si la función retorna una matriz?
int matriz[4];

? se declara normal:
void fx(int m[4]) { return matriz[4]; }

Y la forma de llamar la función sería:
matriz[4] = fx(matriz);

Este programa pide tres números, los almacena en una matriz, le suma 1 a cada elemento y los muestra, usando para cada acción una función. Así que tenemos funciones que reciben matrices y que retornan matrices. Chéquenlo.*/

#include <iostream>
using namespace std;
//Declaramos la funcion, donde se guardan los datos en el array.
void pedir(int matriz[3], int len){
    for (int i=0; i<=len; i++){
        cout << "Numero " << i+1 <<":? ";
        cin >> matriz[i];
    }
}
//
int sumar(int matriz[3], int len){
    for (int i=0; i<=len; i++){
        matriz[i]++;
    return matriz[3];
    }
}
//
void mostrar(int matriz[3], int len){
    for(int i=0; i<=len; i++){
        cout << matriz[i] << " ";
    }
}
//
int main(){
    int matriz[3]={0}, len = sizeof(matriz)/sizeof(int);
    pedir(matriz, len-1);
    matriz[3] = sumar(matriz, len-1);
    mostrar(matriz, len-1);
    return 0;
}
