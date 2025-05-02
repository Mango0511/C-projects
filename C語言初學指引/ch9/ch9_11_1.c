// #include <stdio.h>
// #include <stdlib.h>


// int i ;
// extern void func1(void);

// int main(void){
//     extern int i ; 
//     printf(" i = %d \n", i );
//     func1();
//     printf(" i = %d \n", i );
//     return 0 ; 
// }

#include <stdio.h>
#include <stdlib.h>

int i;
extern void func1(void);


void main(void){
    extern int i;
    printf("i=%d\n",i);
    func1();
    printf("i=%d\n",i);

}