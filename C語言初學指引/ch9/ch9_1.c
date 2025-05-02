#include <stdio.h>
#include <stdlib.h>

int a = 10;//全域變數

void func1(void)
{
    int b = 5;//區域變數
    a = a+1;
    b = b + 1;
    printf("b = %d \n", b);
}

void main(){
    int c = 20;//區域變數
    a = a+1;
    c=c+1;
    printf("a=%d.\n",a);
    func1();
    printf("a=%d.\n",a);
    printf("c=%d.\n",c);
}