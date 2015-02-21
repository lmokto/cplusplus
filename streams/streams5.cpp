//Manipuladores en <iomanip>
// Programacion con C++
// Programa banderas04.cpp;
// probando en Dev-Cpp version 4.9.9.2

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double data[] = { 347.25, 45.75, 124.50, 456.80, 1500.90 };
    double total;
    int ancho = 12;
    //
    cout.precision(2);
    cout.setf(ios::fixed);
    //
    for (int c = 0; c < 5; c++){
        cout << setw(ancho) << data[c] << endl;
        total += data[c];
    }
    //
    cout.fill('-');
    cout << setw(ancho) << ""<< endl;
    cout.fill(' ');
    cout << setw(ancho) << total << endl;
    //
    cout << "Por favor oprime Enter...";
    cin.get();
    return 0;
}