//功能:讀寫二進位檔案
#include <stdio.h>
#include <stdlib.h>

FILE *fp1;//宣告檔案指標

void main(int argc, char *argv){
    char output[] = "This is a binary file !\n";//宣告字元陣列
    char input[100] = {0} ;
    int num ;

    if((fp1=fopen("data3","wb"))==NULL){//寫入二進位檔
        printf("File error\n");
        exit(0);
    }

    num = fwrite(output,sizeof(char),sizeof(output),fp1);//寫入資料到檔案串流
    printf("Binary file writing success!\n");
    fclose(fp1);

    if((fp1=fopen("data3","rb"))==NULL){//讀取二進位檔
        printf("File error\n");
        exit(0);
    }

    num = fread(input,sizeof(char), 23, fp1);//讀出檔案串流資料(存放資料的緩衝區指標
    //,讀取的資料型態大小,要讀取的資料筆數,一個以開啟的檔案指標)
    printf("Binary file read success\n");
    printf("The contact of binary file as below :\n");
    printf("%s\n",input);
    fclose(fp1);

}