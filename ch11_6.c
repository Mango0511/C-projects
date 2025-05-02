#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *fp1, *fp2;

void main(int argc, char *argv[]){
    char src_filename[128];//="ch10_3.exe";
    char dest_filename[128];//="Mybin.exe";

    int ch;

    if(argc<=2){
        printf("Please enter source file name and target filename :");
        exit(0);
    }
    else{
        strcpy(src_filename,argv[1]);
        strcpy(dest_filename,argv[2]);
    }

    if((fp1=fopen(src_filename,"rb"))==NULL){//fopen(src_filename,"rb")開啟檔案時指定寫入二進位檔案
        printf("Error for opening source file %s .\n",src_filename);
        exit(0);
    }

    if((fp2=fopen(dest_filename,"wb"))==NULL){//fopen(src_filename,"rb")開啟檔案時指定寫入二進位檔案
        printf("Error for opening dest file %s .\n",dest_filename);
        exit(0);
    }

    while((ch=fgetc(fp1))!=EOF){
        fputc(ch,fp2);
    }

    fclose(fp1);
    fclose(fp2);
}