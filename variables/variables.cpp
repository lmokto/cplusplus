/* Ambito de variables. Variables locales y globales */
//
#include <iostream>
//
using namespace std;
//
//Variable Global
int a_global=1;
//
//Declaracion de funcion write_var
void write_var(int a);
//
// programa principal
int main(void){
    // variable local
    int a_local=2.;
    // llamada a la funcion vrite_var
    write_var(a_local);
    return 0;
}
//
void write_var(int a){
    // variable local
    int a_local=3.; 
    cout<<"el valor de la variable que pasamos es="<<a<<endl;
    cout<<"el valor de la variable local es="<<a_local<<endl;
    cout<<"el valor de la variable global es="<<a_global<<endl;
    return ;
}