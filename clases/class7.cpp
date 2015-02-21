//Ficha 9b
/* Clases para puntos, segmentos y cuadriláteros */
#include <iostream>
#include <math.h>
using namespace std;
class Point //clase punto
{
public:
int x,y; //datos tipo entero
Point (void){} //constructor sin argumento y vacio (punto origen)
Point (int a, int b) {x=a; y=b;}//constr.con dos argumentos enteros
Point (int a) { x=a; y=a;}//constr.con un argum.(punto diagonal)
Point (){} //Destructor
Point& operator= (Point& P) //operador asignación
{ x = P.x ; y = P.y ;
return *this;} // puntero implícito this
};
class Segment //clase segmento
{
public:
Point P1,P2; // datos tipo punto
Segment (void) {} // constructor sin argumento y vacio
Segment (Point A1, Point A2){P1=A1; P2=A2;}//constr. dos argumentos
Segment //destructor
//definición función de cálculo de la distancia entre dos puntos
double longitud () {return sqrt(((P2.x-P1.x)*(P2.x-P1.x))+
((P2.y-P1-y)*(P2.y-P1.y)))};}
Segment& operator = (Segment& S) //operador asignación
{P1=S.P1; P2=S.P2;
return *this;}
};
class Quad //clase cuadrado
{
public:
Segment S1,S2; // datos tipo segmento
Quad (Segment A1, Segment A2){S1=A1; S2=A2;}//constr. dos argum.
Quad //destructor
//definición función de cálculo área dos segmentos (un cuadrado)
double Area () {return ((S1.longitud())*(S2.longitud()));}
};
//programa principal
int main (void)
{
Point Ori (0,0); Point P1 (2,0); Point P2 (2,5);
Segment S1 (Ori, P1); Segment S2 (P1, P2);
Quad C (S1,S2);
cout <<?la longitud de la base es:?<< S1.longitud()<<endl;
cout <<?la longitud de la altura es:?<< S2.longitud()<<endl;
cout <<?el área del cuadrado es:?<< C.Area()<<endl;
return 0;}