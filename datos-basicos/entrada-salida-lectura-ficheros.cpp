/*Sistema E/S y lectura ficheros -- Trabajando con datos basicos.
Ser capaces de interaccionar con el programa escribiendo y leyendo datos desde consola y desde ficheros.
*/
#include <iostream> /*libreria para manejar la E/S de tipos predefinidos*/
int main(void){
    int outval;
    std::cout << "escribe un valor = "; //outval = 423 por ejemplo
    std::cin >> outval;
    std::cout << "el valor escrito es = " << outval << std::endl;
    return 1;
}
