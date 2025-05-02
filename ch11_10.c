#include <stdio.h>
#include <stdlib.h>

FILE *fp1;

void main(void){
    unsigned char title[54];
    int i, num;
    int filesize,value1,value2,value3,value4,low,high;

    if((fp1=fopen("pexels-vladimirsrajber-31142105.jpg","rb"))==NULL){
        printf("File error\n");
        exit(0);
    }

    num = fread(title,sizeof(unsigned char), 54, fp1);

    low = title[2]%16;
    high = (title[2]-low)/16;
    value1=high*16+low;

    low = title[3]%16;
    high = (title[3]-low)/16;
    value2=high*16*16*16+low*16*16;

    low = title[4]%16;
    high = (title[4]-low)/16;
    value3=high*16*16*16*16*16+low*16*16*16*16;

    low = title[5]%16;
    high = (title[5]-low)/16;
    value4=high*16*16*16*16*16*16*16*16*16+low*16*16*16*16*16*16;

    filesize = value1+value2+value3+value4;

    printf("File size is %d bits .\n", filesize);

    fclose(fp1);
}