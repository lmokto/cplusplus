//
#include <stdio.h>
#include <string.h>

int main(){
    int i;
    char strtext[] = "129th";
    char cset[] = "123456789th";
    //
    i = strspn(strtext, cset);
    printf("the initial number has %d digits.\n",i);
    return 0;
}
/*
Output:

The initial number has 5 digits.
*/
