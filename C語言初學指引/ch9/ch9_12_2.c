#include  <stdio.h>
#include <stdlib.h>


extern int i;
int j;//已經定義為static就不能在定義成extern

void func1(void){
    j=100;
    printf("i in ch9_12_2.c = %d . \n",i);
    printf("j in ch9_12_2.c = %d . \n",j);
}

// void main(void){

// }