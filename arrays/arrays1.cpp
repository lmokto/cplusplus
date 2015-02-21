#include <stdio.h>
#include <stdlib.h>

using namespace std;

#define FILAS 6

int main(){
    float ventas[FILAS] = {123.50, 234.60, 345.45, 345.00, 456.65, 0.0 };
    //
    float total = 0;
    int i;
    //
    puts("VENTAS DE LA SEMANA");
    puts("-------------------");
    //
    for (i=0; i<FILAS; i++){
        total += ventas[i];
        printf( "%8.2f\n", ventas[i] );
    }
    //
    puts("--------");
    printf("%8.2f\n", total );
    //
    system("pause");
    return 0;
}