/*Cuando hacemos una llamada a una función miembro de un objeto, el compilador se encargará de pasar implícitamente como argumento: a un apuntador que contenga la dirección del objeto.

A este apuntador se lo llama, el apuntador this (palabra reservada del lenguaje C++). Además de este uso implícito por parte del compilador, se puede usar this explícitamente para referirse al objeto.

Dependiendo del tipo de función en la cual se use this, tendrá diferente tipo.

En una función miembro no constante:

NomObjeto * const
//(apuntador constante a un objeto no constante)
En una función miembro constante:

const NomObjeto * const
//(apuntador constante a un objeto constante)
A continuación veremos cómo utilizar el apuntador this, de manera implícita (como veníamos haciendolo) y de manera explícita.

Cabe recalcar que cuando lo usemos de manera explícita, utilizaremos -> (un menos y el mayor) ya que se trata de un apuntador y no del objeto en sí dónde deberíamos usar simplemente el . (punto).*/
#include <iostream>
using namespace std;

class Prueba{
 public:
  Prueba(int y = 0){
      this->x = y; //usamos apuntador this explicito.

    }
  int Obtener(void){
    return x; //usamos apuntador this implicito
  }
 private:
  int x;
};

int main(){
  Prueba objeto1(52);
  cout << objeto1.Obtener() << endl;

  return 0;
}
