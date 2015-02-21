/* Definir una estructura para puntos en el espacio*/
//
#include <iostream>
#include <math.h>
using namespace std;
//
//estructura para definir un punto en el espacio
struct puntesp{
    double x,y,z; //coordenada de los puntos
};
//
//declaracion de las funciones prototipos
double distancia(puntesp Pi, puntesp Pj);
//
//programa principal
int main(void){
    //invocamos la estructura de datos 
    puntesp P1,P2;
    // guardamos los datos correspondiente en cada variable
    cout << "introduzca las coordenadas del primer punto:"<<endl;
    cin >> P1.x, P1.y, P1.z;
    cout << "introduzca las coordenadas del segundo punto:"<<endl;
    cin >> P2.x, P2.y, P2.z;
    //
    cout << "la distancia entre los dos puntos es="<<distancia(P1,P2)<<endl;
    return 0;
}
//
//definicion de la funcion distancia
double distancia (puntesp Pi, puntesp Pj){
    return sqrt((((Pj.x-Pi.x)*(Pj.x-Pi.x))+((Pj.y-Pi.y)*(Pj.y-Pi.y))+
((Pj.z-Pi.z)*(Pj.z-Pi.z))));
}