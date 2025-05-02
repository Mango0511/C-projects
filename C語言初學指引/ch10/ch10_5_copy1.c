#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char *id;
    int ScoreComputer;
    int ScoreMath;
    int ScoreEng;
    float ScoreAvg;
}

typedef struct student stu;
typedef stu *stupointer;

void display();

void BubbleSort(stupointer arr, int arr_index){
    int k ,times, i;
    stu temp;
    k = arr_index-1;
    while(k!=0){
        times = 0;
        for(i=0;i<=k-1;i++){
            if((arr+i)->ScoreComputer > (arr+i+1)->ScoreComputer){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                times = i;
            }
        }
        k = times;
    }
}

int main(void){
    return 0;
}