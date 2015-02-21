#include <iostream.h>
#include <stdarg.h>
 
// despliega una lista de cadenas, la ultima debe ser NULL
void printstr(...){
   va_list ap;
   char    *arg;
   va_start(ap, 0);
   while ( (arg = va_arg(ap, char*) ) != NULL) {
      cout << arg;
   }
   va_end(ap);
}
 
int main(){
    printstr("Hola, ", "Esta es\n", "una prueba\n", NULL);
    cin.get();
    return 0;
}