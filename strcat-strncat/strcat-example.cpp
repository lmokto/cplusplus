/*http://www.cplusplus.com/reference/cstring/strcat/*/
#include <stdio.h>
#include <string.h>

int main(){
    char str[80];
    strcpy(str,"these ");
    strcat(str,"strings");
    strcat(str, " are ");
    strcat(str,"concatenated, ");
    puts(str);
    return 0;
}

//output -> these strings are concatenated <-- output
