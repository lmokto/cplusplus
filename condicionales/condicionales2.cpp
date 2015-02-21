/*Ejercicio (if/else)*/
/*El programa pregunta dos números, qué operación desea hacer, y muestra el resultado.*/
#include <iostream>
int main(void){
    double a, b;
    int c;
    std::cout << "introduzca el primer numero "<<  std::endl;
    std::cin >> a;
    std::cout << "introduzca el segundo numero "<<  std::endl;
    std::cin >> b;
    std::cout << "Que operacion desea hacer, 1(suma), 2(multiplicacion) "<<  std::endl;
    std::cin >> c;
    //
    if (c==1){
        std::cout << "el resultado es :" <<a+b<<std::endl;
    } else {
        std::cout << "el resultado es " << a*b<<std::endl;
    }
    //
    return 0;
}