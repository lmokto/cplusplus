/*Conocer las sentencias condicionales que permiten tomar decisiones (switch / break).*/
/*sentencia tipo switch*/
//
#include <iostream>
int main(void){
    int i=1;
    switch(i){
        case 1:
            std::cout << "i es 1"<<std::endl;
        break;
    //
        case 2:
            std::cout << "i es 2 "<<std::endl;
        break;
    //
        case 25:
            std::cout << "i es 25 " << std::endl;
        default:
            std::cout << "i no es ni 1 ni 2 "<<std::endl;
        break;
    }
    return 0;
}