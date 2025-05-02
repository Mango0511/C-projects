#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void){
    int lotto[6];
    int i ;
    srand((unsigned) time (NULL));
    for(i=0;i<=6;i++){
        lotto[i-1] = rand()%49+1;
        printf("The %dth number is %d .\n",i, lotto[i-1]);
    }
}