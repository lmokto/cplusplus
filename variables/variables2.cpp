// Ficha 7
/* Ambito de variables. Variables locales y globales. Modificación 1 */
//
#include <iostream>
//
using namespace std;
//
//declaracion de variable global, valor 5
int a_global=5;
//
//declaracion funcion
void write_var(int a);
//
//programa principal
int main(void){
    //declaracion de variable local, valor 2
    int a_local=2.;
    write_var(a_global); //llamamos a la 
}