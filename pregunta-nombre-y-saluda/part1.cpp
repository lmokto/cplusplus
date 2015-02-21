//Parte Uno
/*Un programa que pregunta su nombre y saluda*/
/*En los ejemplos anteriores se utilizaron 'std::cout'. 'std::cout' es un "objeto" que permite escribir en la consola (la terminal en Linux/Unix/MacOSX), solo se puede utilizar gracias a que se ha incluido definiciones de su uso con la línea de código '#include <iostream>'.
*/
#include <iostream> //Importa libreria para trabajar con E/S
#include <string>
#define FRIEND 1 // DEFINE UNA VARIABLE DEL TIPO CONSTANTE(inmodificables)

int main(void) {
    char name [200] ;
    std::cout << "escribe tu nombre" << std::endl; //Escribe en pantalla.
    std::cin >> name ; //Lee un nombre.
    /*#ifdef que realiza una evaluación lógica, si está definida la variable entonces vamos a continuar; el bloque lógico se cierra con #endif; esto aparece en las líneas 010 y 012.*/
    #ifdef FRIEND
    std::cout << "Hola "<< name << " , que tal !"<< std::endl;
    #endif
    return 0 ;
}
