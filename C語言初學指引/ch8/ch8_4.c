#include <stdio.h>
#include <stdlib.h>

void main(){
    int a ;
    short int *p;
    int *q;
    float *r;
    double *s;

    p = (short int*) &a;//強制變換資料型態
    q = &a ;
    r= (float*) &a;
    s = (double*) &a ;

    printf("p = %p\n",p);
    printf("q = %p\n",q);
    printf("r = %p\n",r);
    printf("s = %p\n",s);
    printf("====================\n");
    p+=1;
    q+=1;
    r+=1;
    s+=1;
    printf("p = %p\n",p);
    printf("q = %p\n",q);
    printf("r = %p\n",r);
    printf("s = %p\n",s);


}