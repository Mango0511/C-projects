#include <stdio.h>
#include <stdlib.h>

typedef float score;

int main(void){
    score stu[3],total,avg;
    int i ;

    for(i=1;i<=3;i++){
        printf("Please enter the score of %dth student :\n",i);
        scanf("%f",&stu[i-1]);
        total+=stu[i-1];
    }

    avg = total/3;
    printf("average score = %.2f .\n",avg);


    return 0;
}