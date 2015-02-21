#include <stdio.h>
#include <stdlib.h>
//
#define FILAS 7
#define COLS 4
//
int main(){
    float VentaSemanaQ[FILAS][COLS] = {
    123.50, 234.60, 345.45, 321.40,
    345.00, 456.65, 123.50, 234.60,
    345.45, 321.40, 345.00, 456.65,
    123.50, 234.60, 345.45, 321.40,
    345.00, 456.65, 123.50, 234.60,
    345.45, 321.40, 345.00, 456.65,
    0.0, 0.0, 0.0, 0.0 };
    //
    float totales[COLS] = { 0.0, 0.0, 0.0, 0.0 };
    float grantotal = 0;
    //
    int f, c, t = 0 ; /* indices para filas, columnas y totales */
    //
    puts("Ventas de cuatro semanas");
    puts("------------------------");
    //
    for (f=0; f<FILAS; f++) {
        for (c=0; c<COLS; c++) {
            totales[c] += VentaSemanaQ[f][c];
            printf("%8.2f ", VentaSemanaQ[f][c] );
        }
        puts("");
    }
    //
    puts("--------------------------------------");
    for (t=0; t<COLS; t++) {
        printf("%8.2f ", totales[t] );
        grantotal += totales[t];
    }
    //
    printf("\n\nGran total: %10.2f\n", grantotal);
    system("pause");
    return 0;
}