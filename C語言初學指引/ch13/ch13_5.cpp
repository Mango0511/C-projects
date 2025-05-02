#include <stdio.h>
#include <stdlib.h>

struct student{
    int ScoreComputer;
    int ScoreEng;
    int ScoreMath;
    float ScoreAvg;
    void ComputeAvg(){
        ScoreAvg = (float) (ScoreComputer+ScoreEng+ScoreMath)/3;
    };
    void display(){
        printf("Computer\t Math\t English\t Average\n");
        printf("%d\t%d\t%d\t%.4f\n",\
        ScoreComputer,ScoreMath,ScoreEng,ScoreAvg);
    }
};

int main(void){
    struct student a,b;   
    a.ScoreComputer = 80;
    a.ScoreEng=50;
    a.ScoreMath = 70;
    a.ComputeAvg();
    a.display(); 
    return 0;
}