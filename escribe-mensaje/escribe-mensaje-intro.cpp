 /* Aqu� generalmente se suele indicar qu� se quiere con el programa a hacer
Programa que muestra 'Hola mundo' por pantalla y finaliza
Aqu� se sit�an todas las bibliotecas que se vayan a usar con #include, que se ver� posteriormente
Las bibliotecas del sistema son las siguientes*/
 
 #include <iostream>
 
 /* Funci�n main
 Recibe: void
 Devuelve: int
 Es la funci�n principal, y la encargada de mostrar "Hola Mundo", sin comillas, por pantalla*/
 
 int main(void){
   /* Este tipo de l�neas de c�digo que comienzan por '//' son comentarios
    El compilador los omite, y sirven para ayudar a otros programadores o a uno mismo en caso de volver a revisar el c�digo
    Es una pr�ctica sana poner comentarios donde se necesiten,
   aunque estas l�neas tan s�lo sirven para ayudar al lector a visualizar el potencial de los comentarios.*/
   std::cout << "hola mundo" << std::endl;// Mostrar por std::cout el mensaje Hola Mundo y comienza una nueva l�nea
   return 0; // Y como en este programa no se hace m�s, se termina devolviendo un 0,
   //que en este caso quiere decir que la salida se ha efectuado con �xito.
 }