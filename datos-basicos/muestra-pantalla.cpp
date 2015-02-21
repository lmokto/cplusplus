//Muestra Contenido del archivo "muestra-pantalla.cpp" en pantalla.
#include <iostream>
#include <fstream>
using namespace std;
int main(void){
    char cadena[128];
    std::ifstream fe("muestra-pantalla.cpp");
    while(!fe.eof()){
        fe >> cadena;
        std::cout << cadena << std::endl;
    }
    fe.close();
    return 0;
}