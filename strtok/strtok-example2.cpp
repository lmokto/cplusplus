/*
strtok example
http://www.cplusplus.com/reference/cstring/strtok/
*/
#include <stdio.h>
#include <string.h>

int main(){
    char str[] ="- This, a sample string.";
    char * pch;
    printf ("Splitting string \"%s\" into tokens:\n",str);
    pch = strtok(str," ,.-");
    while(pch != NULL){
        printf("%s\n",pch);
        pch = strtok(NULL, " ,.-");
    }
    return 0;
}

/*
Output:

Splitting string "- This, a sample string." into tokens:
This
a
sample
string
*/
