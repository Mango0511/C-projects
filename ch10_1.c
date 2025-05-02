#include <stdio.h>
#include <stdlib.h>

typedef float score;

void main(void){
    score stu[3],total,avg;
    int i;

    total;
    for(i=1;i<=3;i++){
        printf("Please enter the score of %dth student : \n", i);
        scanf("%f", &stu[i-1]);//stu是整數陣列，要加&
        total+=stu[i-1];
    }  
    avg=total/3;
    printf("average score = %f . \n", avg);
}