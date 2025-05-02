#include <stdio.h>
#include <stdlib.h>

void  main(){
    char s2[]="Welcome";
    char *s3 = "Welcome";
    char *s4;
    char *s5="Good morning";

    s3=s5;
    s4=s2;
    printf("s2=%s\n",s2);
    printf("s3=%s\n",s3);
    printf("s4=%s\n",s4);
}