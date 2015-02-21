/*Se define la dimensión de un vector mediante un entero, el concepto matriz se restringe de momento a
un vector y sólo se escribe un texto de salida.*/
#include <fstream>
#include <iostream>
int main(void){
    int size;
    //
    std::cout << "introduzca la dimension del vector" << std::endl;
    std::cin >> size;
    std::cout << "vamos a trabajar con un vector de " << size << "componentes " << std::endl;
    //
    std::ofstream MyReport("resultado.txt");
    MyReport << "************* inicio *******" << std::endl;
    MyReport << "Vecotr de " << size << " componentes" << std::endl;
    MyReport << " ********************  fin **** " << std::endl;
    MyReport.close();
    //
    return 0;
}