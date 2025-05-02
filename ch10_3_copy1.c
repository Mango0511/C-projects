#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct student{
    char *stu_id;
    int ScoreComputer;
    int ScoreMath;
    int ScoreEng;
    float ScoreAvg;
};

typedef struct student stu;
typedef stu *stupointer;

stupointer GetNode(){
    stupointer n;
    n = (stupointer) malloc (sizeof(stu));
    if(n==NULL){
        printf("No enough memory\n");
        exit(1);
    } 
    // n->stu_id = "S9703501";
    return n;
}



int main(void){
    int score[3][3]={{89,84,75},{77,69,87},{65,68,77}};
    char *stu_id[3]={"S9703501","S9703502","S9703503"};

    stupointer IM[3];//呼叫大小為三的stu資料型別陣列
    
    int i, Total ;
    // int sizeof_IM;
    // sizeof_IM = sizeof(IM)/sizeof(stu);
    // printf("stu_id[0] = %s", stu_id);
    for(i=0;i<3;i++){
        IM[i] = GetNode();
        IM[i]->stu_id = stu_id[i];
        // strcpy(IM[i]->stu_id, stu_id);
        IM[i]->ScoreComputer = score[i][0];
        IM[i]->ScoreMath = score[i][1];
        IM[i]->ScoreEng = score[i][2];
        Total =  (score[i][0]+score[i][1]+score[i][2]);
        IM[i]->ScoreAvg = (float) Total/3;
        printf("%s\t%d\t%d\t%d\t%.4f\t\n",IM[i]->stu_id,IM[i]->ScoreComputer,\
            IM[i]->ScoreMath, IM[i]->ScoreEng, IM[i]->ScoreAvg);
    }



    return 0;
}

