#include <stdio.h>
#include <stdlib.h>

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int  main(void){
    int m =20, n=60;
    printf("Before m=%d n=%d\n", m, n);
    swap(m, n);
    printf("After m=%d n=%d\n", m, n);
}