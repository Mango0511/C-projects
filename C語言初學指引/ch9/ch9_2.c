#include <stdio.h>
#include <stdlib.h>

int a = 10;//全域變數
void func1(void);

void main(){
    int c = 20;
    printf("a=%d\n",a);
    func1();

}

int b = 100;

void func1(void){
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}