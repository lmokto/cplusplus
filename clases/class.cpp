/*Clases. datos + operaciones, encapsulamiento public, constructores y destructores*/
//
//se define una clase como un conjunto de datos -> atributos (por ejemplo variables) y operaciones, metodosl. (ejemplo funciones).
//
//
#include <iostream>
using namespace std;
//
//definimos una clase con una estructura de datos.
class complex{
    //nivel de acceso para proteger ciertas parte de la clase.
    public: 
        //Atributos (variables)
        double real, imag;
        //Metodos (funciones miembro)
        complex (double a, double b){
            real=a;
            imag=b;
        } ~ complex () {} //destructor de la funcion vacia, sirve para liberar memoria.
};
//
//programa principal
int main(void){
    complex a(1.,1.); //instanciamos la clase y entramos mediante a.
    cout << "complex = " << a.real<<"+"<<a.imag<<"i"<<endl;
    return 0;
}