/* Listar los 20 primeros números pares/impares en orden decreciente*/

#include <iostream>

int main(void){
    int n;
    std::cout<<"los 20 primeros numeros pares en orden decreciente"<<std::endl;
    for (int i=0; i<21; i+=2){
        n=20; n-=i;
        std::cout <<"numero par:"<<n<<std::endl;
    }
    std::cout << " los 20 primeros numeros impares en orden decreciente"<<std::endl;
    for (int i=19; i>0; i-=2){
        std::cout<<"numeros impar:"<<i<<std::endl;
    }
    return 0;
}