#include <stdio.h>
#include <stdlib.h>

extern int i;
int j;

void func1(void){
    j = 100;
    printf("ch9_12_1.c檔案的i = %d\n",i);
    printf("ch9_12_1.c檔案的j = %d\n",j);
}