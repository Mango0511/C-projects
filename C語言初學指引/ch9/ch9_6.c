#include <stdio.h>
#include <stdlib.h>

void func1(void){
    auto int var1;//沒有定義初始值，有時會因編譯器而不同，少數情況下會預設為0
    //生命週期在func1結束就結束了
    printf("var1=%d.\n",var1);//沒有定義初始值
    var1 = 100;//定義初始值
    printf("var1=%d.\n",var1);
    var1+=1;//100+1
    printf("var1=%d.\n",var1);
    
}

void func2(void){
    auto int var2;
    var2=0;
    var2++;
}

void main(void){
    func1();
    func2();
    printf("=================\n");
    func1();//重新呼叫的結果會一樣，只有沒定義初始值的輸出可能不同
}