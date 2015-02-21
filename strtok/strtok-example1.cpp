/*char *strtok(char *cadena1, const char *cadena2);
Divide la cadena1 en tokens (palabras) delimitados por los caracteres que se encuentran en la cadena2. Devuelve un apuntador al token actual, o bien NULL si no existen mas tokens.

Importante

strtok modifica la cadena original (cadena1), es necesario guardarla si no se desea perderla. La primer llamada (para conseguir el primer token) se hace con la cadena (cadena1), las llamadas sucesivas (para obtener los tokens restantes) se hacen con NULL

En el ejemplo que vamos a ver contamos con un arreglo de caracteres (frase[ ]) que contiene una oración. La queremos dividir en tokens separados por los espacios, entonces nuestra primer llamada a la función será:

ptr = strtok(frase, " ");
Con esto obtendremos el primer token en el puntero ptr, para obtener el resto de los tokens las llamadas siguientes deberan hacerse pasando como parámetro a NULL, esto le indica a la función que obtenga el token que le sigue de la cadena original.

Cuando no queden más tokens la función devolverá NULL.

Aca un programa de ejemplo:*/

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char frase[]="Me van a dividir jojojo jojo ";
    char *ptr;
    cout << "LA FRASE ANTES: " << frase << endl;
    ptr = strtok(frase, " ");
    while (ptr != NULL){
        cout << ptr << endl;
        ptr = strtok(NULL," ");
    }
    cout << "LA FRASE DESPUES : " << frase << endl;
    return 0;
}
