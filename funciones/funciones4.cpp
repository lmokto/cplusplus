/*Solución al ejercicio para los cuadrados, rectángulos y triángulos. Nótese cómo una única función
sirve para calcular tanto los rectángulos como los cuadrados.*/
//calculo areas de poligonos
//
// Importamos librerias
#include <iostream>
using namespace std;
//
//declaracion de funciones
int AreaCuadrilateros(double lado_a, double lado_b);
int AreaTriangulos(double lado_a, double altura_b);
//
//Programa principal
int main(void){
    //variables
    double a,b;
    int figura;
    //ingreso de parametros
    cout << "que figura quiere analizar, Cuadrado(1), Rectangulo(2), Triangulo(3), :"<<endl;
    //asignacion de parametro en variable "figura"
    cin >> figura;
    //
    switch(figura){
        case 1:
            cout << " introduzca el valor del lado"<< endl;
            cin >> a;
            if (!AreaCuadrilateros(a,a)){
                cout << "ojo el area es negativa "<< endl;
                break;
            }
        case 2:
            cout << " introduzca el valor del lado a y b: "<< endl;
            cin >> a, b;
            if (!AreaCuadrilateros(a,b)) {
                cout<<"ojo el area es negativa "<<endl;
                break;
            }
        case 3:
            cout<<" introduzca la base y la altura:"<< endl;
            cin >> a, b;
            if (!AreaTriangulos(a,b)) {
                cout<<"ojo el area es negativa "<<endl;
                break;
            }
        default:
            cout << "figura equivocada " << endl;
            break;
    }
    return 0;
}
//
//Declaracion de las funciones
int AreaCuadrilateros(double lado_a, double lado_b){
    double A;
    A=lado_a * lado_b;
    if (A<0){return 0;} else { cout << "el area es: " <<A<<endl;}
    return 1;
}
//
int AreaTriangulos(double lado_a, double altura_b){
    double A;
    A=lado_a * altura_b / 2.;
    if (A<0){return 0;} else { cout << "el area es : " << A << endl;}
    return 1;
}