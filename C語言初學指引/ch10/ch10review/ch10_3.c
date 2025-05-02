#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char id[12];
    int ScoreComputer;
    int ScoreEng;
    int ScoreMath;
    float ScoreAvg;
};



int main(void){
    int score[3][3] = {{89,84,75},
    {77,69,87},
    {65,68,77}    };

    struct student IM[3];
    struct student tempstu;
    int i,Total;
    strcpy(IM[0].id,"S01");
    strcpy(IM[1].id,"S02");
    strcpy(IM[2].id,"S03");
    for(i=0;i<3;i++){
        IM[i].ScoreComputer = score[i][0];
        IM[i].ScoreEng = score[i][1];
        IM[i].ScoreMath = score[i][2];
        Total = score[i][0]+score[i][1]+score[i][2];
        IM[i].ScoreAvg = (float) Total/3;
    }

    printf("Student ID\t\tScoreComputer\tScoreMath\tScoreEng\tScoreAvg\n");
    printf("==========================================================\n");
    for(i=0;i<3;i++){
        tempstu = IM[i];
        printf("%s\t%d\t%d\t%d\t%.4f\n",\
        IM[i].id,IM[i].ScoreComputer,IM[i].ScoreMath,IM[i].ScoreEng,\
        IM[i].ScoreAvg);
    }

    return 0;
}

