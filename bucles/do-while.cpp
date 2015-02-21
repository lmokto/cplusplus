/* Sentencias tipo do-while */

#include <iostream>
int main(void){
    int i=0; int j=6;
    do { std::cout << "el numero 6 es mayor que el "<<i<<std::endl;
    } while (i++<j);
    return 0;
}

/**

3.1 Sentencias tipo do-while

La sentencia do-while ejecuta una sentencia (simple o compuesta) una o más veces, dependiendo del valor de una expresión. Su sintaxis es :

do{
    sentencias;
  }
  while (condición);

*/