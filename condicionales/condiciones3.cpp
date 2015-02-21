/*Calcular areas de diferentes poligonos*/
//
#include <iostream>
int main(void){
    double a, b;
    double Area;
    int figura;
    std::cout << "figura = cuadrado (1), rectangulo(2), triangulo(3) " <<std::endl;
    std::cout << "¿que area quieres calcular? "<<std::endl;
    std::cin >> figura;
    //condicion if.
    if (figura==1){
        std::cout << "valor del lado = ";
        std::cin >> a;
        Area=a*a;
    } else if (figura==2){
        std::cout << "valor del lado menor = ";
        std::cin >> a;
        std::cout<<"valor del lado mayor = ";
        std::cin >> b;
        Area=a*b;
    } else if (figura==3){
        std::cout << "valor de la base =";
        std::cin >> a;
        std::cout << "valro de la altura =";
        std::cin>>b;
        Area=a*b/2.0;
    } else {
        std::cout<<"figura equivocada"<<std::endl;
        Area=0;
    }
    //
    std::cout<<"el area de la figura es ="<<Area<<std::endl;
    return 0;
}