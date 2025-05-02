#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func1(void){
    {
        static int var1=100;
        var1+=1;
        printf("var1=%d\n",var1);
    }

}

void main(void){
    func1();
    printf("=========\n");
    func1();
}