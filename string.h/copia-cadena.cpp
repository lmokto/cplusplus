/*string.h es una librería de c++ que contiene funciones que nos facilitan la vida al trabajar con cadenas o strings. Una cadena es un conjunto de caracteres almacenados en una variable.

Deberíamos saber que char es un tipo de dato que almacena un caracter, por lo tanto un arreglo lineal de caracteres es una cadena:

char str[100];

Ahora podemos llenar nuestra cadena..

str ="Soy una cadena";

?y mostrarla

cout << str;

Pero recuerden que no podemos hacer nada de esto si no tenemos incluida la librería string.h. Vamos a ver un programa de ejemplo:*/

#include <iostream>
#include <string.h>

using namespace std;
/*Primero declaramos dos cadenas (?esunacadena? y ?esunacopia?) que pueden tener hasta 100 caracteres, ?esunacadena? la llenamos con el texto ?Soy una cadena?.*/
int main(){
    char esunacadena[100] = "Soy una Cadena", esunacopia[100];
    strcpy(esunacopia, esunacadena);
/*Luego con la función strcpy copiamos el contenido de ?esunacadena? a ?esunacopia?. Ahora las dos cadenas tienen el mismo texto.*/
    strcat(esunacopia, " -- copia");
//Ahora con la función strcat agregamos el texto ? - copia? al final de?esunacopia?.
    cout << esunacadena << endl << esunacopia;
    //Al final solo mostramos las dos cadenas.
    cin.get(); //detiene el programa
    return 0;
}
