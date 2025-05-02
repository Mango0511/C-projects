#include <stdio.h>
#include <stdlib.h>

void func1(void){
    static int var1=100;/*使用static宣告變數會使生命週期延續至該程式結束，
    因此後續重複呼叫會接續先前的儲存值，但是變數視野仍然維持在函式內*/
    printf("var1=%d\n",var1);
    var1+=1;
    printf("var1=%d\n",var1);
}

void func2(void){
    auto int var2;
    var2=0;
    var2++;
}


void main(void){
    func1();
    func2();
    printf("===============\n");
    func1();//101,102

}