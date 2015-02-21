#include <iostream>
#include <fstream>
//using namespace std;
#define MAX_SIZE 25

int main(void){
    int Matrix [MAX_SIZE];
    // esto es un vector, se ve con detalle en las fichas 12
    // de momento lo tomamos como una definición para poder trabajar
    int size;
    std::ofstream MyReport("resultado.txt");
    //
    std::cout << "introduzca la dimension del vector"<<std::endl;
    std::cin >> size;
    //
    if (size > MAX_SIZE){
        std::cerr << "Error, tamaño demasiado grande"<<std::endl;
        MyReport << "************ inicio"<<std::endl;
        MyReport << "ERROR : dimension del vecotr debe ser menor de" << MAX_SIZE << std::endl;
        MyReport << "*************** FIN" << std::endl;
        MyReport.close();
        return 1;
    }
    //
    for (int i=0; i<size; i++) Matrix[i]=0;
    //inicializando a cero  cada componente
    std::cout << "vamos a trabajar con un vectro de " << size << " componentes" << std::endl;
    //
    MyReport << "************* inicio"<<std::endl;
    MyReport << "Vector de " << size << " componentes "<< std::endl;
    //
    int i=0;
    do {
        MyReport << Matrix[i] << " ";
        } while (++i<size);
    //atencion a la precedencia de operaciones
    //el resultado es distinto si es while(i++<size)
    MyReport << std::endl;
    MyReport << " *********** fin " << std::endl;
    MyReport.close();
    //
    return 0;
}