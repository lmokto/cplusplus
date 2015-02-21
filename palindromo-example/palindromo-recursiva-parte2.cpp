/*http://codigoc.org/590-saber-si-es-palindromo-o-no-de-forma-recursiva-2da-parte
Pues la idea que se me ocurrió en el otro post resultó ser más sencilla de lo que me imaginé, y ahora sí la función recursiva se ve mucho mejor, ya es mucho más que un ciclo disfrazado.

Comenté extensivamente el código, así que aquí está:*/

#include<string.h>
#include<iostream>

using namespace std;
int len, n=0;

string chk4palindrosity(string thestr){
    if(thestr[0] == thestr[thestr.length() - 1]){ // comparar primer caracter con ultimo
        n++;
        if(n == len / 2) // si el numero de veces que la comparación ha sido cierta es...
            return "Si es palindromo!"; // igual a la mitad de los caracters, es palindromo
        thestr.erase(0, 1); // borramos primer caracter
        thestr.erase(thestr.length() - 1, 1); // borramos ultimo
        return chk4palindrosity(thestr); // llamamos a la función con el string recortado
    }
    else // si una de las comparaciones no es cierta, no es palíndromo
        return "No es palindromo";
}

int main(){
    char inputf[50]={0}, input[50], *parte;
    cout<<"Introduce un palindromo: "; cin.getline(input, '\n');

    parte = strtok(input, " ");                 //
    strcat(inputf, parte);                     //
    while((parte = strtok(NULL, " ")) != NULL) //
        strcat(inputf, parte);               // quitar espacios del array

    string thestr(inputf); // convertir array en string para facilitar operaciones
    len = thestr.length(); // obtener longuitud del string
    if(len == 1)
        cout << "Si es palindromo!";
    else
        cout << chk4palindrosity(thestr); // llamar a la funcion e imprimir lo que retorne
    cin.get();
}
/*Lo que hace la función recursiva es comparar el primer
caracter con el último, si son iguales recortarlos y llamarse;
si no, no es palíndromo. Cualquier duda ya saben que los
comentarios están abiertos.

*/
