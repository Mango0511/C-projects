// #include <stdio.h>
// #include <stdlib.h>

// int i ; //全域變數

// void func1(void){
//     extern int i; // 加上extern就會讓編譯器知道前面已經宣告過了，不需要再額外配置記憶體
//     i++;
// }

// void main(void){
//     extern int i ;
//     printf("i = %d\n", i);
//     func1();
//     printf("i = %d\n", i);

// }

#include <stdio.h>
#include <stdlib.h>

int i ;

void func1(void){
    extern int i;//跨檔案全域變數
    i++;
}

void main(void){
    extern int i;
    printf("i=%d\n",i);
    func1();
    printf("i=%d\n",i);
}