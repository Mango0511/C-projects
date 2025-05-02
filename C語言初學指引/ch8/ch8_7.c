#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){//交換a,b指標指到的位址中的數值，
    int temp;
    temp  = *a;
    *a = *b;
    *b = temp;
}

void main(){
    int m = 20,n= 60;
    printf("Before exchange: (m,n) = (%d,%d)\n",m,n);
    printf("Before exchange: (&m,&n) = (%d,%d)\n",&m,&n);
    swap(&m, &n);
    printf("After exchange: (m,n) = (%d,%d)\n",m,n);//數值交換
    printf("Before exchange: (&m,&n) = (%d,%d)\n",&m,&n);//位址不變

}