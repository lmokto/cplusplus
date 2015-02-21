//DE NUEVO CON EL HOLA MUNDO...
#include <iostream>
using namespace std;

int main(){
    char nombre[80];
    cout << "escriba su nombre: ";
    cin >> nombre;
    cout << "Hola," << nombre;
    cin.get();
    return 0;
}