#include <stdio.h>
#include <stdlib.h>

struct student{
    int ScoreComputer;
    int ScoreEng;
    int ScoreMath;
    float ScoreAvg;
    void (*pf)(struct student *k);
};

void ComputeAvg(struct student *i);
void display(struct student *tempStu);

void ComputeAvg(struct student *i){
    i->ScoreAvg = (float) (i->ScoreComputer+i->ScoreEng+i->ScoreMath)/3;
}

void display(struct student *tempStu){
    printf("Computer\t Math\t English\t Average\n");
    printf("%d\t%d\t%d\t%.4f\n",\
    tempStu->ScoreComputer,tempStu->ScoreMath,tempStu->ScoreEng,tempStu->ScoreAvg);
}



int main(void){
    struct student a;
    a.ScoreComputer=80;
    a.ScoreMath=70;
    a.ScoreEng=50;

    a.pf = ComputeAvg;
    a.pf(&a);
    a.pf = display;
    a.pf(&a);

    return 0 ;
}