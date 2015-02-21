/* Listar los 20 primeros números pares en orden decreciente*/

#include <iostream>

int main(void){
    std::cout<<"lista de los 20 primeros numeros en pares en orden decreciente"<<std::endl;
    int i=22;
    do {
        i-=2;
        std::cout<<"numero par: "<<i<<std::endl;
    } while (i>0);
}

/*
 lista de los 20 primeros numeros en pares en orden decreciente
numero par: 20
numero par: 18
numero par: 16
numero par: 14
numero par: 12
numero par: 10
numero par: 8
numero par: 6
numero par: 4
numero par: 2
numero par: 0
*/