#include <stdio.h>
#include <string.h>

int main(){
    char szInput[256];
    printf("enter a sentence: ");
    gets(szInput);
    printf("The sentence entered is %u characters long.\n",(unsigned)strlen(szInput));
    return 0;
}

/*
http://www.cplusplus.com/reference/cstring/strlen/

Enter sentence: just testing
The sentence entered is 12 characters long.

*/
