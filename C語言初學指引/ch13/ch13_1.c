#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>


int x;
int ar1[10];

void f1(int a){
    int b ;
    static int y ;
    static int ar2[10];
    printf("The address of a in f1 = \t:%p\n . ", &a);
    printf("The address of b in f1 = \t:%p\n . ", &b);
    printf("The address of b in f1 = \t:%p\n . ", &b);
    printf("The address of ar2 in f1 = \t:%p\n . ", &ar2);
}

void f2(int c){
    int d ;
    int ar3[10];
    printf("The address of c in f2 = \t:%p\n . ", &c);
    printf("The address of d in f2 = \t:%p\n . ", &d);
    printf("The address of ar3 in f2 = \t:%p\n . ", &ar3);
}

int main(void){
    int w ;
    char* const s1 = "abc";
    char s2[]="abc";
    void (*pfunc)(int);

    int *p = &x;

    printf("The address of x = \t:%p\n . ", p);
    printf("The address of ar1 = \t:%p\n . ", &ar1);
    printf("The address of w = \t:%p\n . ", &w);
    printf("The address of abc in s1 \t:%p\n . ", s1);

    printf("The address of abc in s2 \t:%p\n . ", s2);
    printf("The address of pfunc \t:%p\n . ", &pfunc);
    printf("The address of p \t:%p\n . ", &p);
    pfunc = f1;
    printf("The address of f1 \t:%p\n . ", pfunc);
    f1(3);

    pfunc = f2;
    printf("The address of f2 \t:%p\n . ", pfunc);
    f2(5);
    pfunc = main ;
    printf("The address of main \t:%p\n . ", pfunc);

    return 0;
}