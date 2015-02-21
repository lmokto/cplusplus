#include <iostream>//entrada y salida
#include <stdarg.h>
 
using namespace std;
 
// Esta función opera sobre una lista variable de números enteros
int suma( int num, ... )
{
    int total = 0;
    va_list argptr;
    va_start( argptr, num );
 
    while( num > 0 ) {
    total += va_arg( argptr, int );
    num--;
    }
 
    va_end( argptr );
    return( total );
}
 
int main()
{
    cout << suma(4, 100, 200, 300, 400) << endl;
    cin.get();
    return 0;
}