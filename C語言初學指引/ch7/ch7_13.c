#include <stdio.h>
#include <stdlib.h>

void func1(int a, int b){
    a+=10;
    b+=100;
    printf("a in func1() = %d .\n",a);
    printf("b in func1() = %d .\n",b);
}

void main(){
    int m=1,n=1;
    func1(m,n);
    printf("m in main() = %d . \n", m);
    printf("n in main() = %d . \n", n);
}