#include <iostream>
using namespace std;
#define MAX_SIZE 25

class Matrix {
    public:
    // ***************************** datos
    int size; double s[MAX_SIZE];
    // ***************************** operaciones
    // constructores
    Matrix () : size(0) {}
    Matrix (int m){
        if (m>MAX_SIZE)
            {cerr << "la dimension maxima es "
                << MAX_SIZE << endl; m=MAX_SIZE;}
        size=m; for (int i=0; i<size; i++) s[i]=0.;
        for (int i=0; i<size; i++)
            {cout << endl << "coef (" << i << ")="; cin >> s[i];}
    }
    ~ Matrix() { size=0; }
    void Suma_de_Matrices (Matrix B);
};
// funcion suma de matrices
void Matrix :: Suma_de_Matrices (Matrix A){
    if (A.size != size)
        { cerr << "suma con dimensiones diferentes. Error" << endl; return;}
    for (int i=0; i<size; i++)
        cout << "suma(" << i << ")=" << s[i] + A.s[i] << endl;
return;
}
// el programa ejecutable
int main(){
    Matrix A(3); Matrix B(3);
    A.Suma_de_Matrices (B);
    return 0;
}