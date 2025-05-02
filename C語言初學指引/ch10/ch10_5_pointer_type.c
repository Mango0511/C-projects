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


typedef struct student Stu;
typedef Stu *Stupointer;  

Stupointer initial(){
    Stupointer s;
    s = (Stupointer) malloc (sizeof(Stu));
    if (s==NULL){
        printf("No enough memory\n");
        exit(1);
    }
    strcpy(s->stu_id,"000");
    // s.stu_id = {0,1,2};
    s->ScoreMath = 0;
    return s;
}


void display(Stupointer tempStu);
void BubbleSort(Stupointer *arr, int arr_index);

void display(Stupointer tempStu){
    printf("%s\t%d\t%d\t%d\t%.4f\n",\
        tempStu->stu_id,tempStu->ScoreComputer,tempStu->ScoreMath,tempStu->ScoreEng,\
        tempStu->ScoreAvg);
}

void BubbleSort(Stupointer *arr, int arr_index){
    int k, times, i;
    struct student temp;
    k=arr_index-1;
    while(k!=0){
        times=0;
        for(i=0;i<=k-1;i++){
            if((*(arr+i))->ScoreComputer > (*(arr+i+1))->ScoreComputer)
            {
                temp=*arr[i];
                *arr[i]=*arr[i+1];
                *arr[i+1] = temp;
                times=i;
            };
        }
    k = times;
    }
}

int main(){
    int score[3][3] = {{89,84,75},
                    {77,69,87},
                    {65,68,77}};//宣告整數陣列

    int i,Total;
    Stupointer IM[3];//宣告結構變數陣列，結構也是一種資料型態。struct 結構資料型態名稱 結構變數名稱
    IM[0] = initial();
    IM[1] = initial();
    IM[2] = initial();
    strcpy(IM[0]->stu_id,"S9703501");
    strcpy(IM[1]->stu_id,"S9703502");
    strcpy(IM[2]->stu_id,"S9703503");
    for(i=0;i<3;i++){
        Total=0;
        IM[i]->ScoreComputer = score[i][0];
        IM[i]->ScoreMath = score[i][1];
        IM[i]->ScoreEng = score[i][2];
        Total = score[i][0]+score[i][1]+score[i][2];
        IM[i]->ScoreAvg = (float) Total/3;
    }
    printf("%d\n", IM[2]->ScoreMath);
    // printf("Size of IM is %d . \n",sizeof(IM));
    BubbleSort(IM,3);//struct student *arr = IM --> strcut student *arr; arr = &IM;
    // printf("%d\n", IM[2]->ScoreMath);

    printf("Student ID\tScoreComputer\tScoreMaht\tScoreEng\tScoreAvg\n");
    printf("==========================================================\n");
    for(i=0;i<3;i++){
        // printf("%d\n", i);
        display(IM[i]);
    }

    return 0;
}