#include <stdio.h>
#include <stdlib.h>

FILE *fp1;

void main(void){
    char filename1[80]="data1.txt";
    char tempstr[32];


    // printf("Please enter file name :");
    // scanf("%c",filename1);

    fp1 = fopen(filename1,"r");

    if (fp1==NULL){
        printf("File error");
        exit(1);
    }
    if(fseek(fp1,-17L,SEEK_END)==0){
        fscanf(fp1,"%s",tempstr);
        printf("The 17th token from tail is %c .\n",tempstr);
    }
    else{
        printf("fseek with erro");
    }

    fclose(fp1);
}