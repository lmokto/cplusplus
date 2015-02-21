/*Bueno, casi creo que nunca he hablado de matrices, par�metros o funciones en este blog, pero este post es una petici�n de Rodrigo que me dijo por email que ten�a problemas con su tarea porque no sabe c�mo pasar una matriz como par�metro a una funci�n en c++. Es algo sencillo, pero dif�cil de deducir. Veamos.

Si tu arreglo es de una dimensi�n?
int matriz[4];

? la forma de declarar la funci�n es la siguiente:
void fx(int m[4]) { ...c�digo... }

Y la forma de llamar la funci�n ser�a:
fx(matriz);

Si el arreglo es de dos dimensiones?
int matriz[4][3];

? pues es lo mismo:
void fx(int m[4][3]) { ...c�digo... }

Y la forma de llamar la funci�n ser�a:
fx(matriz);

Si la funci�n retorna una matriz?
int matriz[4];

? se declara normal:
void fx(int m[4]) { return matriz[4]; }

Y la forma de llamar la funci�n ser�a:
matriz[4] = fx(matriz);

Este programa pide tres n�meros, los almacena en una matriz, le suma 1 a cada elemento y los muestra, usando para cada acci�n una funci�n. As� que tenemos funciones que reciben matrices y que retornan matrices. Ch�quenlo.*/

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
