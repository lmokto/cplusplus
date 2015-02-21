/*Nuestras clases deberían estar pensadas para que protejan sus datos miembros, es por esto que suelen declararse bajo la etiqueta private:.

Esto implica que sólo las funciones miembro de la clase pueden acceder a leer y modificar el dato. Para eso es que en las clases construídas anteriormente, escribimos funciones "establecer" y funciones "obtener", lo que hacían era manejar el acceso a los datos miembros privados, para sacarlos formateados correctamente o para establecer sus valores correctamente. Esta capacidad de protección es fundamental para determinar una buena ingeniería de software, ya que independiza el desarrollo de la clase de la implementación (de como se utiliza). Es por esto que hay que tener algunas precauciones al escribir clases para que mantengan esta protección. Una de ellas es no devolver referencias o punteros a datos miembros de la clase. Ya que estaríamos dando acceso directo al dato miembro.

Veamos la siguiente función miembro:

  int & Obtener()
  {
    return x;
  }
Aquí la función miembro Obtener() devuelve una "referencia a un entero", como habíamos dicho, una referencia no es otra cosa que un alias de la variable. Lo que significa que estamos devolviendo un alias de x. Si el cliente quisiera al implementar la clase, podría acceder directamente al dato miembro sin utilizar ninguna función. Por eso se debe evitar la devolución de apuntadores o referencias a datos miembro. Acá un código completo dónde se muestra esta situación:*/
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


/*NOTA: Para clases sencillas no devidiremos las clases en archivos, es más escribiremos todas las funciones miembros de manera inline (más adelante veremos que consecuencias trae, pero por ahora sólo observar que la definición de las funciones se escribe dentro de la clase como en el código anterior).*/
