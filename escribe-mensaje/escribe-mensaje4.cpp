 /* Aquí generalmente se suele indicar qué se quiere con el programa a hacer
Programa que muestra 'Hola mundo' por pantalla y finaliza
Aquí se sitúan todas las bibliotecas que se vayan a usar con #include, que se verá posteriormente
Las bibliotecas del sistema son las siguientes*/
 
 #include <iostream>
 
 /* Función main
 Recibe: void
 Devuelve: int
 Es la función principal, y la encargada de mostrar "Hola Mundo", sin comillas, por pantalla*/
 
 int main(void){
   /* Este tipo de líneas de código que comienzan por '//' son comentarios
    El compilador los omite, y sirven para ayudar a otros programadores o a uno mismo en caso de volver a revisar el código
    Es una práctica sana poner comentarios donde se necesiten,
   aunque estas líneas tan sólo sirven para ayudar al lector a visualizar el potencial de los comentarios.*/
   std::cout << "hola mundo" << std::endl;// Mostrar por std::cout el mensaje Hola Mundo y comienza una nueva línea
   return 0; // Y como en este programa no se hace más, se termina devolviendo un 0,
   //que en este caso quiere decir que la salida se ha efectuado con éxito.
 }