#include <stdio.h>
#include <stdlib.h>

void func1(void){
    printf("func1 running...\n");
}

void func2(void){
    printf("func2 running...\n");
}

void main(){
    func1();
    func2();
}