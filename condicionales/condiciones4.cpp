/*Operadores Logicos*/
#include <iostream>
int main(void){
    int a=5; int b=0;
    int d = a&&b; std::cout << d; //operador && es AND
    int e=a||b; std::cout << e; // operador || es OR
    int f=!a; std::cout << f; // operador !  es NOT
    return 0;
}
/*6. 1 Operadores l�gicos

En C++ una expresi�n es verdadera si devuelve un valor distinto de cero, y falsa en caso contrario. Por
lo tanto, el resultado de una operaci�n l�gica (AND, OR, NOT) ser� un valor verdadero (1) o falso (0).

*Los operadores l�gicos en C++ son los siguientes:

Operador && (AND)
(expresi�n && expresi�n)
* Da como resultado el valor l�gico 1 si ambas expresiones son distintas de cero.
* Da como resultado el valor l�gico 0 si alguna de las dos expresiones es igual a cero. Si lo es la primera, ya no se eval�a la segunda (l�nea de c�digo 107).

Operador || (OR)
(expresi�n || expresi�n)
* Da como resultado el valor l�gico 1 si una de las expresiones es distinta de cero. Si lo es la primera, ya no se eval�a la segunda (l�nea de c�digo 108).
* Da como resultado el valor l�gico 0 si ambas expresiones son cero.

Operador ! (NOT)
(expresi�n ! )
* Da como resultado el valor l�gico 1 si la expresion tiene un valor igual a cero.
* Da como resultado el valor l�gico 0 si la expresi�n tiene un valor distinto de cero (l�nea 109)./*