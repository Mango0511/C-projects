#include <stdio.h>
#include <stdlib.h>

void func1(){
    auto int var2=30;
    printf("Out of section var2 = %d .\n", var2);
    {
        auto int var3 = 40;//區域變數，視野只在區段內
        printf("Inside section var3 = %d .\n",var3);
        printf("Inside section var2 = %d .\n",var2);
    }
}

void main(void){
    auto int var1 = 10;//區域變數，視野涵蓋整個main函式
    printf("Outside seciton var1 = %d . \n", var1);
    {
        auto int var1 = 20;//區域變數，視野只在區段內
        printf("Inside section var1 = %d . \n", var1);
    }
    func1();
}