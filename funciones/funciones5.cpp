/*Se reescribe el programa de la ficha anterior, pero agrupando el código en funciones:*/
//
#include <iostream>
#include <fstream>
using namespace std;
//
#define MAX_SIZE 25
//
void report_error(void);
int report_final (int dimen, int matriz[]);
//
int main(void){
    int size;
    int Matrix [MAX_SIZE];
    // esto es un vector, se ve con detalle en las fichas 12
    // de momento lo tomamos como una definición para poder trabajar
    cout << "Introduzca la dimension del vector"<<endl;
    cin >> size;
    if (size > MAX_SIZE) {report_error();}
    // inicializando a cero cada componente
    for (int i=0; i<size; i++){ Matrix[i]=0;}
    if (report_final(size,Matrix)){
        cout << "vamos a trabajar con un vector de " << size << " componentes " << endl;
    } else { cerr << "erro general" << endl;}
    return 0;
}
//
void report_error(void){
    ofstream MyReport("resultado5.txt");
    cerr << "error, tamañdo demasiado grande " << endl;
    MyReport << " ERROR: dimension del vector debe ser menor de " << MAX_SIZE << endl;
    MyReport << " ************************************** fin" << endl;
    MyReport.close();
    return;
}
//
int report_final (int dimension, int matriz[]){
    ofstream MyReport("resultado.txt");
    MyReport << " *********************************** inicio" << endl;
    MyReport << " Vector de " << dimension << " componentes" << endl;
    int i=0;
    do { MyReport << matriz[i] << " "; } while (++i<dimension);
    // atencion a la precedencia de operadores
    // el resultado es distinto si while (i++<dimension)
    MyReport << endl;
    MyReport << " ************************************** fin" << endl;
    MyReport.close();
    return 1;
}