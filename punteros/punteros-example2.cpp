/*Nuestras clases deber�an estar pensadas para que protejan sus datos miembros, es por esto que suelen declararse bajo la etiqueta private:.

Esto implica que s�lo las funciones miembro de la clase pueden acceder a leer y modificar el dato. Para eso es que en las clases constru�das anteriormente, escribimos funciones "establecer" y funciones "obtener", lo que hac�an era manejar el acceso a los datos miembros privados, para sacarlos formateados correctamente o para establecer sus valores correctamente. Esta capacidad de protecci�n es fundamental para determinar una buena ingenier�a de software, ya que independiza el desarrollo de la clase de la implementaci�n (de como se utiliza). Es por esto que hay que tener algunas precauciones al escribir clases para que mantengan esta protecci�n. Una de ellas es no devolver referencias o punteros a datos miembros de la clase. Ya que estar�amos dando acceso directo al dato miembro.

Veamos la siguiente funci�n miembro:

  int & Obtener()
  {
    return x;
  }
Aqu� la funci�n miembro Obtener() devuelve una "referencia a un entero", como hab�amos dicho, una referencia no es otra cosa que un alias de la variable. Lo que significa que estamos devolviendo un alias de x. Si el cliente quisiera al implementar la clase, podr�a acceder directamente al dato miembro sin utilizar ninguna funci�n. Por eso se debe evitar la devoluci�n de apuntadores o referencias a datos miembro. Ac� un c�digo completo d�nde se muestra esta situaci�n:*/
#include <iostream>
using namespace std;

class Prueba{
    private:
        int x;
    public:
        Prueba(){}
        int & Obtener(){return x;}
        void Establecer(int val){x = val;}
};

int main(){
    Prueba Numero;
    Numero.Establecer(4);
    cout << "El dato miembro x de N vale: " << Numero.Obtener() << endl;
    int &refInt = Numero.Obtener();//Violando la clase
    refInt = 54; //Violador puede alterar la clase Miembro
    cout << "El dato miembro x de N ahora vale " << Numero.Obtener() << endl;
    return 0;
}


/*NOTA: Para clases sencillas no devidiremos las clases en archivos, es m�s escribiremos todas las funciones miembros de manera inline (m�s adelante veremos que consecuencias trae, pero por ahora s�lo observar que la definici�n de las funciones se escribe dentro de la clase como en el c�digo anterior).*/
