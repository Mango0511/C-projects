#include <stdio.h>
#include <stdlib.h>

int Fib(int n ){
    if((n==1)||(n==0)){
        return n;
    }
    else{
        return Fib(n-1)+Fib(n-2);
    }
}

void main(){
    int i; 
    printf("費氏數列如下: \n");
    for(i=0;i<=25;i++){
        if(i%8==0){
            printf("\n");
        }
        printf("%d\t", Fib(i));
    }
    printf("...\n");
}