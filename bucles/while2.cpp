/* listar los 20 primeros numeros pares en orden decrecientes*/

#include <iostream>

int main(void){
    std::cout<<"lista de los 20 primeros numeros pares en orden decreciente"<<std::endl;
    int i=22;
    while (i>0){
        std::cout<<"numero par: "<<i<<std::endl;
        i-=2;
    }
    return 0;
}