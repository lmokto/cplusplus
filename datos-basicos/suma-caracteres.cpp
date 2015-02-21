//Trabajando con datos basicos, suma de caracteres.
#include <iostream>
int main(void){
    char a;
    char b;
    std::cout<<"introduzca el primer caracter"<<std::endl;
    std::cin >> a;
    std::cout<<"introduzca el segundo caracter"<<std::endl;
    std::cin >> b;
    a+=b; //a=a+b, suma tipo de caracter de dos caracteres
    std::cout << "l resultado es "<<a;
    return 0;
}