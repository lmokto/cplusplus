//Trabajando con Funciones.
// Incluye la biblioteca de E/S
#include <iostream>
// using namespace std; utilizado para el copilador, asi uno no agrega continuamente std:: en cout, cin, cerr, etc
using namespace std;
//
int checking (int i, int j); //declaracion de funcion prototipo.
//
int main(void){ // programa principal que se ejecutara.
  //Declara variable, toma como argumento y la guarda.
  int i;
  cout << "Escribe el numero" << endl;
  cin >> i;
  //Declara variable, toma como argumento y la guarda.
  int j;
  cout << "Escribe otro numero" << endl;
  cin >> j;
  //Llama a la funcion, y evalua, si da como resultado return 0
  if (!checking(i,j)){ //llamada a la funcion prototipo "checking".
  cout << i << " es mayor que " << j << endl;} else {
    cout << i <<" es menor que "<<j<<endl;
    return 0;
  }
}
//La funcion evalua si i es mayor o menor que j, segun cual sea, retorna 0 or 1.
int checking (int i, int j){ //definicion de la funcion prototipo.
    if (i<j) {return 1;}
        return 0;
}