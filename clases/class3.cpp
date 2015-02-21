/*Clases para puntos, segmentos, cuadriláteros y triángulos.*/
// Ficha 9a
/* Clases para puntos, segmentos, cuadriláteros y triángulos*/

#include <iostream>
using namespace std;

//Clase punto
class point{
    public:
        int x,y //datos tipo entero
        Point (void){} //constructor sin argumento y vacio (punto origen)
        Point (int a, int b) {x=a; y=b;}//constr.con dos argumentos enteros
        Point (int a) { x=a; y=a;}//constr.con un argum.(punto diagonal)
        //
        ~Point (){} //Destructor
};
//
//clase segmento
class Segment{
    public:
        Point P1,P2; // datos tipo punto
        Segment (void) {} // constructor sin argumento y vacio
        Segment (Point A1, Point A2){
            P1=A1; P2=A2;
        }//constr. dos argumentos
        //
        ~Segment //destructor
};
//
//clase cuadrado
class Quad{
    public:
        Segment S1,S2; // datos tipo segmento
        Quad (Segment A1, Segment A2){
            S1=A1; S2=A2;
        }//constr. dos argum.
        //
        ~Quad // destructor
};
//
//programa principal
int main (void){
    Point Ori (0); //objetos de la clase punto. Punto origen (0,0)
    Point P1 (1); //Punto (1,1)
    Point P2 (2,5); //Punto (2,5)
    Segment S1 (Ori, P1); //objetos de la clase segmento
    Segment S2 (P1, P2);
    Quad C (S1,S2); //objeto de la clase cuadrado
    return 0;
}