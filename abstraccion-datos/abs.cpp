//
//importamos la libreria iostram (stream)
#include <iostream>
using namespace std;
//
//abstraemos los datos simples en una estructura.
//
/*Las estructuras son agrupaciones de variables. De manera que las diferentes variables juntas crean un nuevo tipo de dato. Su sintaxis es la siguiente:*/
//
struct complex{
    double real, imag;
};
//
//creamos el program principal.
int main(void){
    struct complex a;
    a.real = 1;
    a.imag = 1.;
    cout<<"complex="<<a.real<<"+"<<a.imag<<"i"<<endl;
    return 0;
}

/*A partir de los tipos de datos básicos explicados en la ficha 2 y que son aquellos que suministra el
lenguaje de programación por defecto, se pueden definir otros más complejos agrupando un conjunto
de variables (miembros) en un nuevo tipo. C++ permite dos agrupaciones: Estructuras y Clases. Las
estructuras son simples agrupaciones de datos; en cambio, las clases además incorporan funciones para
manipular los datos. Las clases son elementos básicos del lenguaje C++, de naturaleza más compleja;
se analizarán en fichas posteriores.*/