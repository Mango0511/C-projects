#include <stdio.h>
#include <stdlib.h>

void func1(int *a, int b){
    *a+=10;
    b+=100;
    printf("*a in func1() = %d .\n", *a);
    printf("b in func1() = %d .\n", b);
}


void main(){
    int k =1,n=1;
    int *m = &k;
    func1(m,n);
    printf("*m in main() = %d .\n", *m);
    printf("n in main() = %d .\n", n);
}