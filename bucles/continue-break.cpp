/*Código de trabajo (continue / break)*/
///*Salir o modificar un bucle for */

#include <iostream>

int main(void){
    for (int i=1; i<10; i++){
        if (i==2 || i==4) continue;
        if (i == 7) break;
        std::cout<<"escribo el "<<i<<std::endl;
    }
    return 0;
}