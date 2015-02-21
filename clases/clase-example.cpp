//Sientase libre de hacer con este codigo inutil lo que le plazca :)
//http://codigomaldito.blogspot.com
#include <iostream>
using namespace std;

class Libro {
 public:
  Libro();
  void establecerTitulo(char *);
  void establecerPaginas(int);
  void establecerCodigo(int);
  void imprime();
 private:
  char Titulo[40];
  int Cantpaginas;
  int Codigo;
};//fin de la clase

//FUNCIONES MIEMBRO
Libro::Libro()//constructor{
  for (int i = 0; i < 40 ; i++)
    Titulo[i]='\0';
  Cantpaginas = 0;
  Codigo = 0;
}

void Libro::establecerTitulo(char *ptrTitulo){
  for (int i = 0 ;(ptrTitulo[i] != '\0') && i < 40 ;i++)
    Titulo[i] = ptrTitulo[i];
}

void Libro::establecerPaginas(int cant){
  Cantpaginas = cant;
}

void Libro::establecerCodigo(int cod){
  Codigo = cod;
}

void Libro::imprime(){
  cout << "Titulo: " << Titulo << endl;
  cout << "Codigo: " << Codigo << endl;
  cout << "Cant pag: " << Cantpaginas << endl;
}
//FIN FUNCIONES MIEMBRO

//PROGRAMA
int main(){
  Libro Manual;//creo el obj Manual de tipo Libro
  Manual.imprime();
  Manual.establecerCodigo(5878);
  Manual.establecerPaginas(100);
  Manual.establecerTitulo("Codigo Maldito");
  Manual.imprime();
}
