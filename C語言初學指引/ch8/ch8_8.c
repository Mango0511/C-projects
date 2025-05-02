#include <stdio.h>
#include <stdlib.h>

void main(){
    float Temper[12], sum = 0, average;
    int i ;
    for (i=0;i<12;i++){
        printf("The temper of %dth month is :",i+1);
        scanf("%f",(Temper+i));//陣列就是指標，在宣告陣列的時候就已經分配固定且無法更改的記憶體位址，不需要加上&，因為陣列名稱就已經是位址
        sum += *(Temper+i);
    }
    average = sum/12;
    printf("===============================\n");
    printf("The average temper of the year is %f\n .",average);
}