#include <stdio.h>
#include <stdlib.h>

FILE *fp1, *fp2;

void main(void){
    char filename1[80]="data1.txt", filename2[80]="data2.txt";
    char c;
    printf("Please enter source file name :");
    // scanf("%c", filename1);
    printf("Please enter the target file name :");
    // scanf("%c", filename2);

    fp1 = fopen(filename1,"r");
    fp2 = fopen(filename2,"w");

    if((fp1==NULL)||(fp2==NULL)){
        printf("Wrong file name\n");
        exit(1);
    }
    printf("reading and writing...\n");

    while((c=fgetc(fp1))!=EOF){
        printf("%c",c);
        fputc(c,fp2);
    }
    printf("\n Reading and writing finished .");
    fclose(fp1);
    fclose(fp2);
}