#include <stdio.h>
#include <stdlib.h>



void main(){
    int a = 100;
    int *p , *q ;

    printf("Anouncing para,eter ");
    printf("&a = %p\t a= %d\n", &a, a);
    printf("&p = %p\n",&p);
    printf("&q = %p\n",&q);

    p = &a ; 
    printf("===after setting p = &a ===\n");
    printf("p = %p\t *p = %d\n", p, *p);// p = &a, *p = a = 100;

    q = p ;
    printf("===after setting q = p ===\n");
    printf("q = %p\t *q = %d \n", q,*q);// q = p = &a, *q = *p = a = 100;

    *q = 50;
    printf("===after setting *q = 50===\n");
    printf("p=%p\t *p = %d\n", p , *p);//p = &a, *p = *q = a = 50
    printf("q = %p\t *q = %d\n", q ,*q);// q = &a , *q = a = 50
    printf(" a = %d\n",a);// a= 50


}