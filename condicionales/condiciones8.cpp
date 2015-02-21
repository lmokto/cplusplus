/*calcular areas de diferentes poligonos*/

#include <iostream>

int main(void){
    double a, b, Area;
    int figura;
    //
    std::cout<<"figura = rectangulo(1), triangulo(2)"<<std::endl;
    std::cout<<"¿que area es circular?"<<std::endl;
    std::cin>>figura;
    //
    switch(figura){
        case 1:
            std::cout << "valor del lado menor =";
            std::cin >> a;
            std::cout << "valor del lado mayor =";
            std::cin >> b;
            Area=a*b;
            break;
        //
        case 2:
            std::cout << "valor de la base =";
            std::cin >> a;
            std::cout << "valor del lado mayor =";
            std::cin >> b;
            Area=a*b;
            break;
        //
        default:
            std::cout << "figura equivocada"<<std::endl;
            break;
    }
    if (Area) std::cout<<"El area de la figura es ="<<Area<<std::endl;
    else std::cerr << "error, la figura no tiene area"<<std::endl;
    return 0;
}