/*Se define el concepto matriz mediante una estructura, se agrupan los datos en un único bloque
abstracto:*/
//
#include <iostream>
#include <fstream>
#include <math.h>
//
using namespace std;
//
#define MAX_SIZE 25
//
struct Matrix {
    int size;
    int s[MAX_SIZE];
};
//
void report_error(void){
    ofstream MyReport("resultado_uno.txt");
    cerr << "error, tamaño demasiado grande " << endl;
    MyReport << " *************************** inicio " << endl;
    MyReport << " ERROR: dimension del vector debe ser menor de " << MAX_SIZE << endl;
    MyReport << "******************************* fin " << endl;
    MyReport.close();
    return;
}
//
int report_final(struct Matrix mat){
    ofstream MyReport("resultado.txt");
    MyReport << " *********************************** inicio" << endl;
    MyReport << " Vector de " << mat.size << " componentes" << endl;
    for (int i=0; i<mat.size; i++) MyReport << mat.s[i] << " ";
    MyReport << endl;
    MyReport << " ************************************** fin" << endl;
    MyReport.close();
    return 1;
}
//
int main(void){
    struct Matrix MyMatrix;
    cout << "Introduzca la dimensión del vector"<<endl;
    cin >> MyMatrix.size;
    if (MyMatrix.size > MAX_SIZE) report_error();
    for (int i=0; i<MyMatrix.size; i++) MyMatrix.s[i]=0;
// inicializando a cero cada componente
    if (report_final(MyMatrix))
    cout << "Vamos a trabajar con un vector de " << MyMatrix.size
    << " componentes" <<endl;
    else cerr << "error general" << endl;
    return 0;
}