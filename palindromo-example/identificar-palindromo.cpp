//
/*
Lo primero que tendríamos que hacer sería quitar
los espacios de nuestra cadena. Luego ir comparando,
el primer caracter con el último, el segundo con el
 penúltimo, etc. Si todos los caracteres coinciden,
 es palíndromo, si no, pues no.*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char cadena[50], cadenaf[50]={}, *parte;
    int c, len, pal=0;
    cout << "Introduce un palindromo : ";
    cin.getline(cadena, 50, '\n');
    //
    parte=strtok(cadena," ");
    strcat(cadenaf, parte);
    while((parte=strtok(NULL, " ")) != NULL)
        strcat(cadenaf,parte);
    //
    len=strlen(cadenaf);
    for(c=0;c<=len-1;c++){
        if(cadenaf[len-1-c]==cadenaf[c]){
            pal++;
        }
    }
    if(pal==len){
        cout << "si es palindromo!";
    } else {
        cout <<"no es palindromo";
    }
    cin.get();
}
