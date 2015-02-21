#include <iostream>
#include <fstream>
using namespace std;
char *filename = "test.$$$";
// abre y lee datos de un archivo en disco cuyo nombre es dado por
filename
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
// crea una copia del archivo test.$$$ hacia test.bak
// Nota: ningún carácter de espaciado en el origen le es tranferido al
destino
int backup(char *filename)
{
char newname[80];
int i = 0;
// copia el nombre del archivo original y remplaza la extensión por
"BAK".
while (filename[i] != '.' ) newname[i] = filename[i++];
newname[i] = '\0';
strcat(newname, ".BAK");
ifstream fin( filename ); // abrir archivo de entrada
ofstream fout( newname, ios::trunc ); // abrir archivo de salida
char temp;
while ( ! fin.eof() ) {
fin >> temp;
fout << temp ;
}
fin.close();
fout.close();
return 0;
}
int main()
{
backup(filename);
leerArchivo("test.bak");
cout << endl << "Presione <Enter>...";
cin.get();
return 0;
}