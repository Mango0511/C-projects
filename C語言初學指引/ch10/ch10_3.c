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

void main(void){
    int score[3][3] = {{89,84,75},
                    {77,69,87},
                    {65,68,77}    };
    struct student IM[3];
    struct student tempStu;
    int i,Total;
    strcpy(IM[0].stu_id,"S9703501");
    strcpy(IM[1].stu_id,"S9703502");
    strcpy(IM[2].stu_id,"S9703503");
    for(i=0;i<3;i++){
        Total = 0;
        IM[i].ScoreComputer = score[i][0];
        IM[i].ScoreMath = score[i][1];
        IM[i].ScoreEng = score[i][2];
        Total = (score[i][0]+score[i][1]+score[i][2]);
        IM[i].ScoreAvg = (float) Total/3;
    }
    printf("Student ID\t\tScoreComputer\tScoreMaht\tScoreEng\tScoreAvg\n");
    printf("==========================================================\n");
    for(i=0;i<3;i++){
        tempStu = IM[i];
        printf("%s\t%d\t%d\t%d\t%.4f\n",\
        IM[i].stu_id,IM[i].ScoreComputer,IM[i].ScoreMath,IM[i].ScoreEng,\
        IM[i].ScoreAvg);
    }
}