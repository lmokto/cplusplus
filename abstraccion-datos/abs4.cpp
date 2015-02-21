#include <iostream>
#include <fstream>

using namespace std;

#define MAX_SIZE 25

struct Matrix{
    int size;
    int s[MAX_SIZE];
};

struct Matrix Suma_de_Matrices(struct Matrix Iz, struct Matrix Dr);

void print_matrix (struct Matrix mat);

int main (void){
    int i;
    struct Matrix A; A.size=5;
    for (i=0; i<A.size; i++) A.s[i]=1;
    struct Matrix B; B.size=5;
    for (i=0; i<B.size; i++) B.s[i]=1;
    struct Matrix C=Suma_de_Matrices(A,B);
    print_matrix(C);
    return 0;
}

struct Matrix Suma_de_Matrices(struct Matrix Iz, struct Matrix Dr){
    struct Matrix temp; temp.size=Iz.size;
    for (int i=0; i<temp.size; i++) temp.s[i]=Iz.s[i]+Dr.s[i];
    return temp;
}

void print_matrix(struct Matrix mat){
    ofstream MyReport("resultado.txt");
    MyReport << " *********************************** inicio" << endl;
    MyReport << " Vector de " << mat.size << " componentes" << endl;
    for (int i=0; i<mat.size; i++) MyReport << mat.s[i] << " ";
    MyReport << endl;
    MyReport << " ************************************** fin" << endl;
    MyReport.close();
    return;
}