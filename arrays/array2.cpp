// Ejemplo: demostraci�n de la clase string
// Compilado y ejecutado con exito en Bloodshed Dev-C++

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    string s("Hola, ");
    s += "c�mo estan ustedes...";
    cout << s << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}