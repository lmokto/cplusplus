/*Reciben y Retornan
 *
Ahora queremos que nuestra función únicamente sume, el main se va a encargar de pedir los números y sumar los resultados. Para eso necesitamos que nuestra función reciba las variables y además retorne el resultado. ¡Wow! ¿Es acaso eso posible? Claro que sí.

Es sólo cuestión de combinar las funciones que reciben y no retornan con las que retornan y no reciben.

Nuestro programa quedaría así:
*/

#include <iostream>
using namespace std;

int sumar(int num1, int num2){
    int r;
    r = num1 + num2;
    return r;
}

int main(){
    int num1, num2, r;
    cout << "Numero 1: "; cin >> num1;
    cout << "Numero 2: "; cin >> num2;
    r = sumar(num1, num2);
    cout << "La suma es " << r;
}
