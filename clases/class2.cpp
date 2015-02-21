/* Definir complejos en notación polar. Añadir constructores para dicha notación. */

#include <iostream>
#include <math.h>
using namespace std;

#define PI 3.14159

//Definimos la clase
class complexPolar{
    public:
        // Variables(atributos)
        double mod, arg;
        // Funcion(metodos)
        complexPolar(double a, double b){
            mod = sqrt((a*a)+(b*b));
            arg = 180.*atan(b/a)/PI;
        }
        //Destructor (liberacion de memoria)
        ~complexPolar () {}
};

int main(void){
    double a, b;
    //
    cout<< "introduzca la parte real del punto:"<<endl;
    cin>> a;
    cout<< "introduzca la parte imaginaria del punto:"<<endl;
    cin>> b;
    //
    complexPolar P (a, b);
    //
    cout << "la notacion polar del numero complejo introducido es:"<<
"("<<P.mod<<","<<P.arg<<")"<<endl;
    //
    return 0;
}