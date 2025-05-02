#include <stdio.h>
#include <stdlib.h>

void main(){
    double array[8][15];
    double *p, *q;
    int blocksize, count;
    
    p = &array[2][6];
    q = &array[6][11];

    count = q - p;
    blocksize = count *sizeof(double);

    printf("p = %p\t q = %p\n ",p,q);
    printf("There are %d elements between element[2][6] and element[6][10] . \n", count);
    printf("The memory block size  between element[2][6] and element[6][10] are %d bytes.\n", blocksize);
    // printf("");

}