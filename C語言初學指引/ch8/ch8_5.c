#include <stdio.h>
#include <stdlib.h>

void main(){
    int a,b;
    int *p = &a , *q = &b;

    printf("pointer p point to memory address %p \n",p);
    printf("pointer q point to memory address %p \n",q);
    if (p>q){
        printf("The memory address of parameter a is infront of b. \n");
    }
    else{
        printf("The memory address of parameter b is infront of a. \n");
    }


}