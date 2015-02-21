/*Se define la dimensión de un vector mediante un entero; el concepto matriz se restringe, de momento,
a un vector; se escribe un texto de salida mediante una sentencia lógica:*/

#include <iostream>
#include <fstream>

#define MAX_SIZE 25

int main(void){
    int size;
    std::ofstream MyReport("resultado.txt");
    //
    std::cout << "introduzca la dimension del vector " << std::endl;
    std::cin >> size;
    //
    if (size > MAX_SIZE){
        std::cerr << "error, tamaño demasiado grande "<<std::endl;
        MyReport << "************************ INICIO"<<std::endl;
        MyReport << "ERROR: dimension del vector debe ser menor de " << MAX_SIZE << std::endl;
        MyReport <<  " ********************************* fin" << std::endl;
        MyReport.close();
        return 1;
    }
    //
    std::cout << "vamos a trabajar con un vector de " << size << " componentes " << std::endl;
    //
    MyReport << "********************* inicio" << std::endl;
    MyReport << "Vector de " << size << " componentes "<<std::endl;
    MyReport << " *************************** fin " << std::endl;
    MyReport.close();
    //
    return 0;
}