#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char stu_id[12];
    int ScoreComputer;
    int ScoreMath;
    int ScoreEng;
    float ScoreAvg;
};

typedef struct student StuScore;//宣告結構體別名StuScore

void display(StuScore);
void BubbleSort(StuScore *arr, int arr_index);

void display(StuScore tempStu){
    printf("%s\t%d\t%d\t%d\t%.4f\n",\
        tempStu.stu_id,tempStu.ScoreComputer,tempStu.ScoreMath,tempStu.ScoreEng,\
        tempStu.ScoreAvg);
}

void BubbleSort(struct student *arr, int arr_index){
    int k, times, i;
    struct student temp;
    k=arr_index-1;
    while(k!=0){
        times=0;
        for(i=0;i<=k-1;i++){
            if((arr+i)->ScoreComputer > (arr+i+1)->ScoreComputer)
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1] = temp;
                times=i;
            };
        }
    k = times;
    }
}

void main(){
    int score[3][3] = {{89,84,75},
                    {77,69,87},
                    {65,68,77}};//宣告整數陣列

    int i,Total;
    StuScore IM[3];//宣告結構變數陣列，結構也是一種資料型態。struct 結構資料型態名稱 結構變數名稱
    strcpy(IM[0].stu_id,"S9703501");
    strcpy(IM[1].stu_id,"S9703502");
    strcpy(IM[2].stu_id,"S9703503");
    for(i=0;i<3;i++){
        Total=0;
        IM[i].ScoreComputer = score[i][0];
        IM[i].ScoreMath = score[i][1];
        IM[i].ScoreEng = score[i][2];
        Total = score[i][0]+score[i][1]+score[i][2];
        IM[i].ScoreAvg = (float) Total/3;
    }
    // printf("Size of IM is %d . \n",sizeof(IM));
    BubbleSort(IM,3);//struct student *arr = IM --> strcut student *arr; arr = &IM;
    printf("Student ID\tScoreComputer\tScoreMaht\tScoreEng\tScoreAvg\n");
    printf("==========================================================\n");
    for(i=0;i<3;i++){
        display(IM[i]);
    }
}