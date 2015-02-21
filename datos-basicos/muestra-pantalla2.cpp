/* el programa realiza operaciones con números y escribe
el resultado en un archivo */
#include <iostream>
#include <fstream>
int main(void){
    int a, b, c;
    std::cout << "dame el valor de a  = ";
    std::cin >> a; //a = 2
    std::cout << "dame el valor de b = ";
    std::cin >> b; // b = 3
    //
    std::ofstream fp("nombre.dat");
    fp << a+b << " "; //5
    fp << a-b << std::endl; //-1
    fp.close();
    //
    int sum, dif;
    std::ifstream fr("nombre.dat");
    fr >> sum >> dif;
    fr.close();
    //
    std::cout << "la suma es " << sum << std::endl;
    std::cout << "la diferencia es " << dif << std::endl;
    return 0;
}