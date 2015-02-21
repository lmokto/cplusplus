/*http://codigomaldito.blogspot.com.ar/2005/11/cstring-strcat-y-strncat.html

La función strcat
char *strcat (char *cadena1, const char *cadena2);
//Prototipo de strcat
Sirve para concatenar la cadena cadena2 hacia cadena1. Devuelve el valor
    de  cadena1.

La función strncat:
char *strncat (char *cadena1, const char *cadena2, size_t n)
Sirve para concatenar n caracteres desde cadena2 hacia cadena1. Devuelve el valor de cadena1.

Ejemplo:*/
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char cadena1[30] = "Hola ";
    char cadena2[]="hermosa gorda";
    char cadena3[20] = "El dijo: ";
    cout << "cadena1 es: " << cadena1 << endl;
    cout << "cadena2 es: " << cadena2 << endl;
    strcat(cadena1,cadena2);//concatena la cadena1 con cadena2
    cout << "Ahora cadena1 es: " << cadena1<< endl;
    //
    cout << "cadena3 es: " << cadena3 << endl;
    strncat(cadena3,cadena1,13);//concatena 12 caracteres de c1 a la c3
    cout << "Ahora cadena3 es: " << cadena3 << endl;
}
