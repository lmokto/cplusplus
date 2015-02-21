// Ejemplo de ifstream y ofstream
// En este programa se demuestra la forma de crear un archivo
// en disco por medio de objeto ofstream, y la manera abrir y
// leer un archivo por medio de un objeto ifstream.
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
char *filename = "test.$$$";
char *data = "Esta línea de texto se guardará en el archivo test.$$$";
// crear un archivo en disco cuyo nombre es dado por filename
int crearArchivo(char *filename)
{
ofstream fichero(filename); // crear o rescribir archivo
// verificar la creación del archivo
if ( fichero.bad() ) {
cout << "Error al tratar de abrir archivo";
cin.get();
return 1;
}
// escribir datos al archivo
for (unsigned int t = 0; t < strlen(data); t++ )
fichero.put(data[t] );
fichero.close();
cout << "archivo creado exitosamente" << endl;
return 0;
}
// abrir un archivo en disco cuyo nombre es dado por filename
int leerArchivo(char *filename)
{
ifstream fichero(filename); // abrir archivo para lectura
// verificar la apertura del archivo
if ( fichero.bad() ) {
cout << "Error al tratar de abrir archivo";
cin.get();
return 1;
}
// lectura de datos
while ( ! fichero.eof() ) cout << (char)fichero.get();
fichero.close();
cout << endl << "archivo leido exitosamente" << endl;
return 0;
}
int main()
{
crearArchivo(filename);
leerArchivo(filename);
cout << endl << "Presione <Enter>...";
cin.get();
return 0;
}