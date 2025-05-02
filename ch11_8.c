//功能: 配合結構體寫入二進位檔案資料
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

FILE *fp1;

struct student{
    char stu_id[12];
    int ScoreComputer;
    int ScoreMath;
    int ScoreEng;
    float ScoreAvg;
};



void main(int argc, char *argv[]){
    int score[3][3]={
        {89,84,75},
        {77,69,87},
        {65,68,77}
    };

    struct student IM[3];
    struct student tempstu;
    int i,Total,num;
    strcpy(IM[0].stu_id,"S9703501");
    strcpy(IM[1].stu_id,"S9703502");
    strcpy(IM[2].stu_id,"S9703503");

    for(i=0;i<3;i++){
        Total = 0;
        IM[i].ScoreComputer = score[i][0];
        IM[i].ScoreMath = score[i][1];
        IM[i].ScoreEng = score[i][2];
        Total = score[i][0]+score[i][1]+score[i][2];
        IM[i].ScoreAvg = (float) Total/3;
    }

    if((fp1 = fopen("data4.txt","w+b"))==NULL){
        printf("File error\n");
        exit(0);
    }

    num = fwrite(IM,sizeof(struct student),3,fp1);

    printf("Binary file writing finished !\n");
    fclose(fp1);

}
