//sentencias tipo while

#include <iostream>

int main(void){
    int i=0;
    while (i<6){
        std::cout<<"el numero 6 es mayor que el "<<i++<<std::endl;
    }
    return 0;
}

/*
 *8 Conceptos
8.1 Sentencias tipo while
La sentencia while funciona de forma parecida al bucle do-while. La diferencia principal estriba en que
el bucle do-while asegura que, al menos, se ejecuta una vez el código contenido entre las llaves;
mientras que el while depende de la condición lógica.
Su sintaxis es :
while (condición)
{
sentencias;
}
*/