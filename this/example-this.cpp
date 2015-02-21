/*Cuando hacemos una llamada a una funci�n miembro de un objeto, el compilador se encargar� de pasar impl�citamente como argumento: a un apuntador que contenga la direcci�n del objeto.

A este apuntador se lo llama, el apuntador this (palabra reservada del lenguaje C++). Adem�s de este uso impl�cito por parte del compilador, se puede usar this expl�citamente para referirse al objeto.

Dependiendo del tipo de funci�n en la cual se use this, tendr� diferente tipo.

En una funci�n miembro no constante:

NomObjeto * const
//(apuntador constante a un objeto no constante)
En una funci�n miembro constante:

const NomObjeto * const
//(apuntador constante a un objeto constante)
A continuaci�n veremos c�mo utilizar el apuntador this, de manera impl�cita (como ven�amos haciendolo) y de manera expl�cita.

Cabe recalcar que cuando lo usemos de manera expl�cita, utilizaremos -> (un menos y el mayor) ya que se trata de un apuntador y no del objeto en s� d�nde deber�amos usar simplemente el . (punto).*/
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
