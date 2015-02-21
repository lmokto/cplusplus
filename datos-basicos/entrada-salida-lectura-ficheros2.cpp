/*Sistema E/S y lectura ficheros -- Trabajando con datos basicos.
Ser capaces de interaccionar con el programa escribiendo y leyendo datos desde consola y desde ficheros.*/
#include <fstream> /*libreria para manejar lectura/escritura archivos*/
#include <iostream>
int main(void){
    int outval = 3;
    std::ofstream fs("myfile.txt"); //Apertura fichero en modo escritura, asignamos dicha operacionn a la variable fs.
    fs << outval; //escribimos el valor de outval en el fichero.
    fs.close(); //cierre de fichero
    int inval;
    std::ifstream fe("myfile.txt"); //abrimos el fichero en modo lectura
    fe >> inval; //leemos el fichero y lo colocamos en inval.
    fe.close(); //cerramos el fichero
    std::cout << "el valor escrito es = " << inval << std::endl; //el valor escrito es = 3
}