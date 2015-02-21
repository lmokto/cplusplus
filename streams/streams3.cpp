//Programacion con C++
//programa Banderas01.cpp
//Probando en Dev-Cpp Version 4.9.9.2

#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    cout<<"\n0 > 1 ? "<<"\t"<<(0>1)<<endl;
    cout<<"\t5 > 1 ? "<<"\t"<<(5>1)<<endl;
    //boolalpha Los valores booleanos pueden ser leídos/escritos usando las palabras "true" y "false"
    cout.setf(ios::boolalpha);//activa bandera y muestra resultados con los valores True o False.
    cout<<"\n0 > 1 ? "<<"\t"<<(0>1)<<endl;
    cout<<"\t5 > 1 ? "<<"\t"<<(5>1)<<endl;
    //
    cin.get();
    return 0;
}