#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char cadena1[] = "hola A";
    char cadena2[]="hola D";
    cout << "Cadena1 es " << cadena1 << endl;
    cout << "Cadena2 es " << cadena2 << endl;
    //
    /*La función strncmp:
    char *strncmp (char *cadena1, const char *cadena2, size_t n)
    Sirve para comparar n caracteres entre cadena2 y cadena1.

    Devuelve el valor devuelve 0 si son iguales.
    Devuelve menor que cero si cadena1 es menor que cadena2.
    Devuelve mayor que cero si cadena1 es mayor que cadena2.*/
    cout << "strncmp(cadena1, cadena2, 4)= " << strncmp(cadena1,cadena2,4)<<endl;
    /*
    La función strcmp:
    //prototipo de strcmp
    int strcmp (const char *cadena1, const char *cadena2);
    Sirve para comparar la cadena cadena1 con la cadena2.

    Devuelve el valor devuelve 0 si son iguales.
    Devuelve menor que cero si cadena1 es menor que cadena2.
    Devuelve mayor que cero si cadena1 es mayor que cadena2.
    */
    cout << "strcmp(cadena1,cadena2)= " << strcmp(cadena1,cadena2) << endl;
    cout << "strcmp(cadena2,cadena1)=  "<< strcmp(cadena2,cadena1) << endl;
}
