#include <stdio.h>
#include <stdlib.h>

FILE *fp1;

struct student {
    char stu_id[12];
    int ScoreComputer;
    int ScoreMath;
    int ScoreEng;
    float ScoreAvg;
};

void display(struct student);

void display(struct student tempStu){
    printf("%s\t%d\t%d\t%d\t%.4f\n",\
    tempStu.stu_id, tempStu.ScoreComputer, tempStu.ScoreMath,\
    tempStu.ScoreEng, tempStu.ScoreAvg);
}

void main(void){

    struct student IM[50];
    int i,num;

    fp1=fopen("data4.txt","r+b");

    if(fp1==0){
        printf("File error\n");
        exit(0);
    };

    num = fread(IM,sizeof(struct student),2,fp1);

    printf("Binary file reading success, the information of the top two students show below . \n");
    fclose(fp1);
    for (i=0;i<2;i++){
        display(IM[i]);
    }

}