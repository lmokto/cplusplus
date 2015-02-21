/*
La memoria dinámica es un espacio de almacenamiento que se puede solicitar en tiempo de ejecución. Además de solicitar espacios de almacenamiento, también podemos liberarlos (en tiempo de ejecución) cuando dejemos de necesitarlos.

Para realizar esta administración de la memoria dinámica, C++ cuenta con dos operadores new y delete. Antes de utilizarlos, debemos incluir el encabezado <new>.

El operador new reserva memoria dinámica de cualquier tipo, esto es:

tipos primitivos (int, double, etc)
tipos definidos por el usuario (clases o estructuras).
Veamos las siguientes líneas:

int *ptrEntero;
ptrEntero = new int;
/*(al puntero ptrEntero le asignamos
dinamicamente espacio para contener un valor int)


int *ptrEnteroA;
ptrEnteroA = new int(5);
/*(igual que al anterior
pero de paso lo inicializamos en 5)
También podríamos hacerlo con un arreglo, para esto:

int *arreglo =  new int[45];
/*
(creamos un arreglo dinámico, ésta vez lo
hacemos en la misma línea en la que
decarmos l puntero)

Suponamos ahora que poseemos una clase Punto, podríamos crear objetos dinámicos a partir de esta clase.

Punto *ptrQ;
ptrQ = new Punto(4,5);
/*
(en la segunda línea le pasamos
además dos parámetros separados por
coma al constructor de Punto)

Hemos estado pidiendo memoria dinámica, una vez utilizada lo correcto sería liberarla antes de que finalice el programa para esto utilizaremos el operador delete:

delete ptrEntero;
delete ptrEnteroA;
delete ptrQ;
delete [] arreglo;
//Si no usaramos [] no se liberaría el arreglo entero
Aquí dejo un programa, con una sencilla clase Punto, y la declaración de algunos objetos en la memoria dinámica.
*/
#include <iostream>
using std::cout;

using std::endl;
#include <new> //para poder utilizar new y delete
class Punto{
 public:
  Punto(int X=0,int Y=0){
      establecer(X,Y);
    }
  void establecer(int x1,int y1){
    x = x1;
    y = y1;

  }
  void imprimir(void){
    cout << "(" << x << "," << y << ")" << endl;

  }
 private:
  int x;
  int y;

};

int main(){
  //declaracion e inicializacion
  Punto J(45,-12);

  Punto *ptrQ;
  ptrQ = new Punto(5,7);

  Punto *arreglodePuntos;
  arreglodePuntos = new Punto[10];

  //imprimimos
  cout << "J";
  J.imprimir();

  cout << "ptrQ";
  ptrQ->imprimir();
  for (int i = 0 ; i < 10 ; i++){
      cout << "arreglodePuntos[" << i <<"]";
      arreglodePuntos[i].imprimir();
    }
  //liberamos
  delete ptrQ;
  delete [] arreglodePuntos;

  //fin
  return 0;
}
