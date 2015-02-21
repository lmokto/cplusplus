//Escribe Mensaje parte 2
/*En los ejemplos anteriores se utilizaron 'std::cout'. 'std::cout' es un "objeto" que permite escribir en la consola (la terminal en Linux/Unix/MacOSX), solo se puede utilizar gracias a que se ha incluido definiciones de su uso con la línea de código '#include <iostream>'.
*/
#include <iostream>
int main(void){
    char msg[200];
    std::cout << "escribe un mensaje con una sola palabra:" << std::endl;
    std::cin >> msg;
    std::cout << "*******************************" << std::endl;
    std::cout << msg << std::endl;
    return 0;
}