/* el programa pregunta dos números, que operación deseas hacer
y muestra el resultado*/

#include <iostream>

int main(void){
    double a, b; int c;
    std::cout << "Introduzca el primer numero" << std::endl;
    std::cin >> a;
    std::cout << "Introduzca el segundo numero" << std::endl;
    std::cin >> b;
    std::cout << "Introduzca el tercer numero" << std::endl;
    std::cin >> c;
    //
    switch(c){
        case 1:
            std::cout << " el resultado es: " <<a+b<<std::endl;
        break;
        //
        default:
            std::cout << "el resultado es : " << a*b<<std::endl;
        break;
    }
    return 0;
}