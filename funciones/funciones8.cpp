#include <iostream>
#include <stdlib.h>

using namespace std;
//declaracion prototipo
char *numstr(unsigned int, const int base = 10);
// punto de prueba
int main(){
    int n = 128;
    cout << "decimal = " << n << ",  binario = " << numstr(n, 2) << endl;
    cout << "decimal = " << n << ",  octal.. = " << numstr(n, 8) << endl;
    cin.get();
}
//definicion de funcion numstr()
// nota, esta funcion requiere de la libreria stdlib.h
char *numstr(unsigned int n, const int base){
    static char buffer[65];
    itoa(n, buffer, base);
    return buffer;
}