//Control de flujo. Condicionales I -- Codigo de Trabajo
//Conocer las sentencias if/else condicionales que permiten tomar decisiones.
/*sentencias tipo if/else . anidamiento y operaciones logicas*/
//
#include <iostream>
//
int main(void){
    int i=1; int j=2;
    if (i<j){
        std::cout<<" i es menor que j"<<std::endl;
    }
    else {
        std::cout<<"i es mayor que j"<<std::endl;
    }
    return 0;
}
//output -> i es menor que j