//Datos Basicos Parte 2
//el programa pregunta dos numeros, los suma y muestra el resultado.


#include <iostream>
int main(void){
    double x, y, z;
    std::cout << "introduzca el primer numero" << std::endl;
    std::cin >> x;
    std::cout << "introduzca el segundo numero" << std::endl;
    std::cin >> y;
    z = x+y;
    std::cout << x << "+"<< y <<"="<< z <<std::endl;
    return 0;
}