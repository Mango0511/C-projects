#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct flag{//定義結構
    unsigned int f1:1;
    unsigned int f2:2;
};

void main(void){
    struct flag PSW;//宣告結構變數
    PSW.f1 = 1;
    PSW.f2 = 2;

    if(PSW.f1==1){
        printf("f1 is on \n");
    }
    else{
        printf("f1 is off\n");
    }
    switch(PSW.f2){
        case 0 :
            printf("f2 is off-off\n");
            break;
        case 1 :
            printf("f2 is off-on\n");
            break;
        case 2 :
            printf("f2 is on-off\n");
            break;
        case 3 :
            printf("f2 is on-on\n");
            break;
        default:
        break;
    }

}