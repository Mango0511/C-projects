#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]){
    int i ;
    printf("The program gets %d parameter from the order row .\n", argc);
    for(i=0;i<=argc;i++){
        printf("Charactors in argv[%d] are %s .\n", i,argv[i]);
    }
}