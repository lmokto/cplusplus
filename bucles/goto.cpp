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
La sentencia goto permite saltar a una l�nea espec�fica del programa, identificada por una etiqueta.
Su sintaxis es :
goto etiqueta;
.
.
etiqueta:
sentencia;
En la l�nea 106 del c�digo de trabajo se utiliza la sentencia goto para saltar a la l�nea 108, ejecut�ndose
la sentencia que escribe por pantalla el mensaje ?aqui si? (l�nea 109).
En general, se recomienda no utilizar nunca esta sentencia porque complica el seguimiento del
c�digo y va en contra de la filosof�a de programaci�n de objetos. Sin embargo, durante el per�odo de
pruebas del programa puede ser interesante utilizarla para encontrar errores y facilitar la depuraci�n
del c�digo.
*/