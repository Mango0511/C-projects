#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copy_string(char *c1, char *c2){
    int i = 0;
    while(*(c2+i)!='\0'){
        *(c1+i) = *(c2+i);
        i++;
    }
    *(c1+i) = '\0';
}

void main(void){
    char string1[60] = "Welcome",string2[60];

    int len;

    copy_string(string2,string1);
    // strcpy(string2,string1);
    printf("string2 = %s\n", string2);
    len = strlen(string2);
    printf("String length = %d\n",len);
}