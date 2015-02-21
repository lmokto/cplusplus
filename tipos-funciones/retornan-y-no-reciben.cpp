//Funciones que retornan y no reciben.

/*¿Y si ahora queremos lo contrario? Pedir los números en la función, pero mostrar el resultado en el main. Para eso necesitamos una función que retorne.

Recibir es enviar datos del main a la función. Retornar es enviar datos de la función al main. Para retornar datos hay que hacer dos cosas: no usar void como tipo y usar return.

De forma general:
tipo nombre() { return var; }

El ?tipo? tiene que ser del tipo de variable que queremos retornar, si nuestra variable retorna una variable int, pues el tipo de la función es int.

Para indicar qué variable estamos retornando usaremos la palabra return seguido de la variable. Usualmente esto va al final de la función.

Para llamar a la función hay que preparar un colchón en donde caiga la variable que está retornando.
var = nombre();

La variable que está retornando nuestra función se va a almacenar en la variable ?var?. Este es un buen momento para recordarles que las variables declaradas entre dos llaves {} únicamente existen entre esas dos llaves. O sea que la variable ?var? de la función no es la misma que la variable ?var? de la función; sin embargo la var del main está adquiriendo el valor de la var del main. Un poco confuso lo se, no se preocupen.

Nuestro programa quedaría así:*/

#include <iostream>
using namespace std;

int sumar(){
    int num1, num2, r;
    cout << "numero 1: "; cin >> num1;
    cout << "numero 2: "; cin >> num2;
    r = num1 + num2;
    return r;
}

int main(){
    int r;
    r = sumar();
    cout << "La suma es " << r;
}