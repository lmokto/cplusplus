/**/
#include <iostream>
#include <fstream>
//
#define MAX_SIZE 25
//
int main(void){
    int Matrix [MAX_SIZE];
    // esto es un vector, se ve con detalle en las fichas 12
    // de momento lo tomamos como una definición para poder trabajar
    // se está definiendo un vector Matrix[25] de 25 componentes
    int size;
    std::ofstream MyReport("resultado.txt");
    std::cout << "introduzca la dimension del vector"<<std::endl;
    std::cin>>size;
    if (size > MAX_SIZE){
        std::cerr << "error, tamañdo demasiado grande " << std::endl;
        MyReport << "************** inicio" << std::endl;
        MyReport << " ERROR: dimension del vector debe ser menor de " << MAX_SIZE << std::endl;
        MyReport << " ***************************  FIN" << std::endl;
        MyReport.close();
        return 1;
    }
    for (int i=0; i<size; i++) Matrix[i]=0; //inicializando el valor a cero cada componente.
        std::cout << "vamos a trabajar con un vector de " << size << " componentes " << std::endl;
    MyReport << "************************ INICIO "<< std::endl;
    MyReport << "vector de " << size << " componentes " << std::endl;
    int i=0;
    do { MyReport << Matrix[i] << " "; } while (++i<size);
        //atencion a la precedencia de operadores
        //el resultado es distinto si es while(i++<size)
    MyReport << std::endl;
    MyReport << " ***************** FIN" << std::endl;
    MyReport.close();
    return 0;
}