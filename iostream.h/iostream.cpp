//http://codigoc.org/280-como-empezar-a-usar-iostream
#include <iostream>
using namespace std;

int main(){
    int edad;
    cout << "Cual es tu edad : "; cin >> edad;
    cout << "\n\t Tue edad es " << edad;
    cin.get(); // cin.get es el equivalente de getch, detiene la ejecuci�n del programa
    return 0;  // No es necesaria para que el programa funcione,
            // pero es una buena costumbre indicar que nuestro programa termin�
           // sin errores.
}