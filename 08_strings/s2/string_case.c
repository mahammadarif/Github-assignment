#include<stdio.h> 
#include<stdlib.h>
#include <ctype.h>
void string_case(char *c){
int i = 0;

    while (c[i]) {
        if (isupper(c[i]))
            c[i] = tolower(c[i]);
        else if (islower(c[i]))
            c[i] = toupper(c[i]);
        i++;
    }
printf("%s",c);
}
