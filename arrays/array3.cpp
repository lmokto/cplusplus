// Ejemplo: demostración de la clase vector
// Compilado y ejecutado con exito en Bloodshed Dev-C++

#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]){
// creación de un vector de enteros
vector<int> v;
// metiendo datos en el vector
for (int x = 500; x<1000; x+=50){
    v.push_back(x);}
// desplegando los datos del vector
for (int x = 0; x < v.size(); x++){
    cout << "v[" << x << "] = " << vsystem("PAUSE");
    return EXIT_SUCCESS;}
}