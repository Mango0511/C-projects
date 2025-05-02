#include <stdio.h>
#include <stdlib.h>

FILE *fp1;

void main(void){
    char filename[10]="data1.txt";

    // printf("Enter filename :");
    // scanf("%s",filename);

    fp1 = fopen(filename, "r");
    if(fp1!=NULL){
        printf("Opening file %s ... \n", filename);
    }
    else{
        printf("Failed to open file %s ... \n", filename);
        exit(1);
    }

    fclose(fp1);
    printf("File %s closed .\n ", filename);
}
