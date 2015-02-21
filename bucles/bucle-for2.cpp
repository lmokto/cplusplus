/*Bucle for ejercicio 2*/
/* Escribir la tabla de multiplicar de un cierto número*/

#include <iostream>

int main(void){
    int n;
    std::cout << "introduzca el numero cuya tabla de multiplicar desea" << std::endl;
    std::cin >> n;
    if (n==0){
        std::cout << " la tabla es nula" << std::endl;
    } else {
        std::cout << " la tabla de multiplicar del numero" << n << "es :" << std::endl;
        for (int i =1; i<10; i++)
            std::cout << i << "*"<<n<<"="<<i*n<<std::endl;
    }
    return 0;
}