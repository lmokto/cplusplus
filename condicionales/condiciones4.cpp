/*Operadores Logicos*/
#include <iostream>
int main(void){
    int a=5; int b=0;
    int d = a&&b; std::cout << d; //operador && es AND
    int e=a||b; std::cout << e; // operador || es OR
    int f=!a; std::cout << f; // operador !  es NOT
    return 0;
}
/*6. 1 Operadores lógicos

En C++ una expresión es verdadera si devuelve un valor distinto de cero, y falsa en caso contrario. Por
lo tanto, el resultado de una operación lógica (AND, OR, NOT) será un valor verdadero (1) o falso (0).

*Los operadores lógicos en C++ son los siguientes:

Operador && (AND)
(expresión && expresión)
* Da como resultado el valor lógico 1 si ambas expresiones son distintas de cero.
* Da como resultado el valor lógico 0 si alguna de las dos expresiones es igual a cero. Si lo es la primera, ya no se evalúa la segunda (línea de código 107).

Operador || (OR)
(expresión || expresión)
* Da como resultado el valor lógico 1 si una de las expresiones es distinta de cero. Si lo es la primera, ya no se evalúa la segunda (línea de código 108).
* Da como resultado el valor lógico 0 si ambas expresiones son cero.

Operador ! (NOT)
(expresión ! )
* Da como resultado el valor lógico 1 si la expresion tiene un valor igual a cero.
* Da como resultado el valor lógico 0 si la expresión tiene un valor distinto de cero (línea 109)./*