#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void main(){
    int i;
    srand((unsigned) time (NULL));
    for(i=1;i<=6;i++){
        printf("The %dth random number is %d .\n",i,rand());
    }
}