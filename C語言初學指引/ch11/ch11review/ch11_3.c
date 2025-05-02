#include <stdio.h>
#include <stdlib.h>

FILE *fp1, *fp2;

void main(void){
    char filename1[80]="data1.txt",filename2[80]="data2.txt";
    char tempstr[32];

    // printf("Please enter source file name :");
    // scanf("%c",filename1);
    // printf("Please enter target file name :");
    // scanf("%c",filename2);

    fp1 = fopen(filename1, "r");
    fp2 = fopen(filename2, "w");

    if ((fp1==NULL)||(fp2==NULL)){
        printf("File with error!\n");
        exit(1);
    }

    printf("Reading and writing file...\n");

    while((fgets(tempstr,32,fp1))!=NULL){
        printf("%s",tempstr);
        fputs(tempstr,fp2);
    }
    printf("\n Finished reading and writing file .");
    fclose(fp1);
    fclose(fp2);

}