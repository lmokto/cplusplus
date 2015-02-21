#include <string.h>
#include <iostream>

using namespace std;

char cadenaf[50]={}; int len, n=0;

string chk4palindrosity(int c){
    if(cadenaf[c] == cadenaf[len-1-c]){
        n++;
        if(n==len/2)
            return "si es palindromo!";
        return chk4palindrosity(c+1);
    }
    else
        return "no es palindromo";
}

int main(){
    char cadena[50],*parte;
    cout<<"introduce un palindromo: ";
    cin.getline(cadena,50,'\n');
    //
    parte = strtok(cadena, " ")
    strcat(cadenaf,parte);
    while((parte = strtok(NULL," ")) != NULL) //
}
