#include <stdio.h>
#include <stdlib.h>

class student{
    public:
        ~student();
        int stu_size();
        void showdata();
    private:
        struct stu{
            char stu_id[12];
            int ScoreComputer;
            int ScoreMath;
            int ScoreEng;
            float ScoreAvg;
        };
        stu Entry;
};

student::~student(){
    printf("deleting 1 student class object ...\n");
};

int student::stu_size(){
    return sizeof(stu);
};

void student::showdata(){
    printf("Computer\t Math\t English\t Average\n");
        printf("%s\t%d\t%d\t%d\t%.4f\n",\
            Entry.stu_id,Entry.ScoreComputer,Entry.ScoreMath,Entry.ScoreEng,Entry.ScoreAvg);
}

FILE *fp;

int main(){
    student *IM;
    IM = new student[10];
    int i ;
    if(fp=fopen("data4","rb")==NULL){
        printf("File Error\n");
        exit(0);
    }

    int num = fread(IM,sizeof(student),2,fp);
    fclose(fp);

    printf("Binary file has bee read, the data of the top two students showed below :\n");
    for(i=0;i<2;i++){
        IM[i].showdata();
    }
    delete [] IM;

    return 0;
}