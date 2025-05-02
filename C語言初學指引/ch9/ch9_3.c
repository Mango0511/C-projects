#include <stdio.h>
#include <stdlib.h>

int a = 10;

void func1(){
    int a = 5;
    a = a + 1;
    printf("a in func1 = %d . \n", a);/*會印出區域變數，因為相較於全域變數
    ，區域變數離該行程是更近(宣告順序問題)，a=6，a=6*/
}

void func2(){
   a = a + 1;
   printf("Global a = %d .\n", a);//沒有宣告區域變數，只會印出全域變數a=10
}

void main(){
    int a = 20;
    a = a + 1;
    printf("a in main = %d . \n", a);//跟func1一樣會印出區域變數，a=21
    func1();
    func2();
}