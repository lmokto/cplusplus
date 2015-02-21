//sentencia goto

#include <iostream>

int main(void){
    goto jumping;
    std::cout<<"aqui no llego"<<std::endl;
    jumping:
    std::cout<<"aqui si"<<std::endl;
    return 0;
}

/*
 *6 Conceptos
6.1 Sentencia goto
La sentencia goto permite saltar a una línea específica del programa, identificada por una etiqueta.
Su sintaxis es :
goto etiqueta;
.
.
etiqueta:
sentencia;
En la línea 106 del código de trabajo se utiliza la sentencia goto para saltar a la línea 108, ejecutándose
la sentencia que escribe por pantalla el mensaje ?aqui si? (línea 109).
En general, se recomienda no utilizar nunca esta sentencia porque complica el seguimiento del
código y va en contra de la filosofía de programación de objetos. Sin embargo, durante el período de
pruebas del programa puede ser interesante utilizarla para encontrar errores y facilitar la depuración
del código.
*/