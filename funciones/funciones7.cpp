#include <iostream>
#include <string.h>

using namespace std;

//declaracion de prototipo
char *binstr(unsigned int);

//punto de prueba
int main(void){
    int n = 128;
    cout << "decimal = " << n << ", binario = " << binstr(n) << endl;
    cin.get();
}

//definicion de funcion binstr()
//nota: esta funcion requiere de la biblioteca estandar string.h
char *binstr(unsigned int n){
    static char buffer[65];
    int i = 0;
    //
    strcpy(buffer, "0");
    //
    if (n>0){
        while (n > 0){
            buffer[i] = ( n & 1 ) + "0";
            i++;
            n >>= 1;
        }
        buffer[i] = "\0";
        strrev(buffer);
    }   // fin ( n > 0)
    return buffer;
}