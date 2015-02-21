//Datos basicos parte 3

#include <iostream>
int main(void){
    int i = 1; //asignamos variable numerica
    double x=-1.26; 
    double y=2;
    x+=y; //x=x+y, suma double de dos doubles, x=0.74
    y*=y; //y=y*y, producto double de dos doubles, y=4
    x=x+i; //suma double de un double y un entero, x=1.74
    i+=x; //suma entera de un entero y un double, 1=2
    std::cout<<"x+y"<<x+y<<"i="<<i<<std::endl; //mostramos la operacion.
    return 0;
}