/*Calcular la longitud entre dos puntos */
//
//Importamos librerias
#include <iostream>
#include <math.h>
using namespace std;
//
//declaracion de funciones
double longitud(double x0,double y0,double z0,double xf,double yf,double zf);
//
// programa principal
int main(void){
    double x1, y1, z1;
    double x2, y2, z2;
    //
    cout << "coordenada x del primer punto";
    cin >> x1;
    cout << "coordenada y del primer punto";
    cin >> y1;
    cout << "coordenada z del primer punto";
    cin >> z1;
    cout << "coordenada x y z del segundo punto";
    cin>>x2>>y2>>z2;
// llamada a funcion
cout << " la longitud es:" << longitud (x1,y1,z1,x2,y2,z2)<<endl;
return 0;
}
//
//Definicion de funciones
double longitud(double x0,double y0,double z0,double xf,double yf,double zf){
    return sqrt ((((xf-x0)*(xf-x0))+((yf-y0)*(yf-y0))+((zf-z0)*(zf-z0))));
}