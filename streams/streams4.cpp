//Programacion con C++
//programa Banderas02.cpp
//Probando en Dev-Cpp Version 4.9.9.2

#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    //Activamos la bandera BOOLALPHA(nos dice que es verdadero o falso)
    cout << boolalpha;
    cout << "0 > 1 ? " << '\t' << (0 > 1) << endl;
    cout << "5 > 1 ? " << '\t' << (5 > 1) << endl;
    // TRNASFORMAMOS CADA NUEMERO A SU CORRESPONDIENTE VALOR
    // SEGUN LA BANDERA ESTABLECIDA
    cout << dec << 2048 << endl;
    cout << hex << 2048 << endl;
    cout << oct << 2048 << dec << endl;
    // TOMAMOS EL VLAOR ENTER PARA TERMINAR
    cin.get();
    return 0;
}