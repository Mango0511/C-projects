#include <stdio.h>
#include <stdlib.h>

void main(){
    int a = 100;
    double b = 5.5;
    int *ptr1 = &a;// int *ptr1; ptr1 = &a;
    double *ptr2 = &b;
    printf("a = %d .\n ", a);
    printf("b = %d . \n", b);
    printf("&a = %p .\n",&a);
    printf("&b = %p .\n",&b);
    printf("*ptr1 = %d .\n", *ptr1);
    printf("*ptr2 = %d .\n",*ptr2);
    printf("ptr1 = %p .\n",ptr1);
    printf("ptr2 = %p .\n",ptr2);
    printf("&ptr1 = %p .\n", &ptr1);
    printf("&ptr2 = %p .\n", &ptr2);
    printf("&*ptr1 = %p .\n", &*ptr1);//&*ptr1 = &(*ptr1) = &a
    printf("&*ptr2 = %p .\n",&*ptr2);//&*ptr2 = &(*ptr2) = &b
    printf("======================\n");
    printf("變數a占用%d個位元組\n", sizeof(a));
    printf("變數b占用%d個位元組\n", sizeof(b));
    printf("======================\n");
    printf("變數*ptr1占用%d個位元組\n", sizeof(ptr1));
    printf("變數*ptr2占用%d個位元組\n", sizeof(ptr2));
}