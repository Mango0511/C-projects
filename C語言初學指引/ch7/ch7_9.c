#include <stdio.h>
#include <stdlib.h>

int fucn1(void){
    printf("func1 running...");
}

void main(){
    int a =1 ;
    a = func1();
    printf("a = %d . \n", a);
}