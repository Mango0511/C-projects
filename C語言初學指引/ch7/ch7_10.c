#include <stdio.h>
#include <stdlib.h>



void main(){
    int i ;
    for(i=1;i<=6;i++){
        printf("The %dth random number is %d .\n",i,rand());
    }
}

