/*
Un arreglo en C++ es un conjunto de datos que se alamacenan en memoria de manera contigua con el mismo nombre. Para difenciar los elementos de un arreglo se utilizan índices detrás del nombre del arreglo y encerrados por []. El elemento 5° (quinto) de un arreglo, es representado por el índice [4], ya que los índices comienzan en 0. Esto significa que un arreglo de 10 elementos tendría los índices del 0 al 9: [0...9]

Ejemplos:

int arregloEntero[10]; 
//Declaracion de un arreglo de 10 elementos, sin inicializar.  
arregloEntero[5] = 45; //Asignacion de 45 al elemento 6 del arreglo.


double arrPuntoFlotante[3] = {1.1,1.2,1.3}; 
//Declaracion y asignacion en un arreglo de 3 elementos double.

int a[4], b[5]; 
//Declaracion de dos arreglos enteros, de 4 y 5 elementos.
Ahora veamos un ejemplo, donde se trata un arreglo de 10 elementos con ciclos for:
*/
//Uso de arreglos en C++
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
  int arregloEntero[10] = {0}; 
  //Arreglo entero de 10 elementos inicializados todos en 0.
  cout << "Arreglo recien declarado: " << endl;
  for (int i = 0 ; i < 10 ; i++) 
    //Notar el menor estricto (<) para ir desde 0 hasta 9
    cout << "arregloEntero["<<i<<"]="<<arregloEntero[i] << endl;
  cout << "Introduzca 10 nuevos valores " << endl;
  for (int i = 0 ; i < 10 ; i++) 
    //Notar el menor estricto (<) para ir desde 0 hasta 9
    {
      cout << " Introduzca nuevo valor para arreglo Entero["<<i<<"]" << endl;
      cin >> arregloEntero[i];
    }
  cout << "Luego de los valores introducidos, el arreglo quedo asi: " << endl;
  for (int i = 0 ; i < 10 ; i++) 
    //Notar el menor estricto (<) para ir desde 0 hasta 9
    cout << "arregloEntero["<<i<<"]="<<arregloEntero[i] << endl;
  return 0;
}