#include <stdio.h>
#include <stdlib.h>

void main(){
    int i,j ;
    char *Week[7] = 
    {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};//二維陣列
    char date[] = {1,2,3};
    for(i=0;i<7;i++){
        printf("Week[%d] = %s\n",i,Week[i]);//陣列就是常數指標，取用陣列元素不用再加*
        printf("*Week[%d] = %c\n",i,*Week[i]);//指標型態，指到陣列元素的開頭位址
    }
    for (j=0;j<3;j++){
        printf("date = %d . \n", date[j]);
    }

}