#include <stdio.h>
#include <stdlib.h>

void action(int *k, void (*pf)(int *k));
void inc(int *i);
void dec(int *i);

void inc(int *i){
    (*i)++;
}

void dec(int *i){
    (*i)--;
}

void action(int *k, void (*pf)(int *k)){
    pf(k);
}

void main(){
    int a = 100;
    printf("Beginning data = %d . \n", a);
    action(&a,inc);
    action(&a,inc);
    action(&a,dec);
    printf("Beginning data = %d . \n", a);
}