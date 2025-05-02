#include <stdio.h>
#include <stdlib.h>

FILE *fp1, *fp2;


void main(void){
    char filename1[80]="data1.txt",filename2[80]="data2.txt";
    char tempstr[32];

    fp1 = fopen(filename1,"r");
    fp2 = fopen(filename2,"w");

    if ((fp1==NULL)||(fp2==NULL)){
        printf("File with error!\n");
        exit(1);
    }

    while(fscanf(fp1,"%s",tempstr)!=EOF){//若回傳值為EOF代表寫入過程中出現錯誤

        fprintf(fp2,"%s\n",tempstr);
    };


    fclose(fp1);
    fclose(fp2);

}