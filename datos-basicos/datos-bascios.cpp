//Parte 2 - Codigo de Trabajo con Datos Basicos.

#include <iostream>
int global = 5; //Creamos una variable global.
int main(void){ //funcion main.
    int a = 1; //creamos una variable local dentro de la funcion main.
    double x = 1.2 ; //asignamos el valor 1.2 a la variable x
    double y = 2.3 ; //asignamos el valor 2.3 a la variable y
    std::cout << "x+y=" <<x+y<<" "<<"a="<<a<<std::endl; //mostramos en salida.
    a = global + (int) x; //efectuamos la operacion matematica
    std::cout<<"a="<<a<<std::endl; //la mostramos en pantalla
    return 0;
}