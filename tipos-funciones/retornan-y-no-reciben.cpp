//Funciones que retornan y no reciben.

/*�Y si ahora queremos lo contrario? Pedir los n�meros en la funci�n, pero mostrar el resultado en el main. Para eso necesitamos una funci�n que retorne.

Recibir es enviar datos del main a la funci�n. Retornar es enviar datos de la funci�n al main. Para retornar datos hay que hacer dos cosas: no usar void como tipo y usar return.

De forma general:
tipo nombre() { return var; }

El ?tipo? tiene que ser del tipo de variable que queremos retornar, si nuestra variable retorna una variable int, pues el tipo de la funci�n es int.

Para indicar qu� variable estamos retornando usaremos la palabra return seguido de la variable. Usualmente esto va al final de la funci�n.

Para llamar a la funci�n hay que preparar un colch�n en donde caiga la variable que est� retornando.
var = nombre();

La variable que est� retornando nuestra funci�n se va a almacenar en la variable ?var?. Este es un buen momento para recordarles que las variables declaradas entre dos llaves {} �nicamente existen entre esas dos llaves. O sea que la variable ?var? de la funci�n no es la misma que la variable ?var? de la funci�n; sin embargo la var del main est� adquiriendo el valor de la var del main. Un poco confuso lo se, no se preocupen.

Nuestro programa quedar�a as�:*/

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