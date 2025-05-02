#include <stdio.h>
#include <stdlib.h>

void func1(void);
void func2(void);

void main(void){
    func1();
    func2();

}

void func1(void){
    printf("func1 running...\n");
}

void func2(){
    printf("func2 running...\n");
}