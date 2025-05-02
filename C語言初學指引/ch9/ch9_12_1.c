// #include <stdio.h>
// #include <stdlib.h>

// int i = 10;
// static int j = 10;

// extern void func1(void);

// int main (void){
//     extern int i ;
//     extern int j ;
//     func1();
//     printf("ch9_12_1.c檔案的i = %d\n",i);
//     printf("ch9_12_1.c檔案的j = %d\n",j);
//     return 0 ;
// }

#include <stdio.h>
#include <stdlib.h>

int i = 10;
static int j=10;

extern void func1(void);

void main(void){
    extern int i ;
    extern int j ;
    func1();
    printf("i in ch9_12_1.c = %d . \n",i);
    printf("j in ch9_12_1.c = %d . \n",j);
    // printf();

}