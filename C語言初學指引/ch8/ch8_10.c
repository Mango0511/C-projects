#include <stdio.h>
#include <stdlib.h>

void main(){
    char *s3 = "Welcome";//char *s3; s3 = &("Welcome")
    int i ; 
    for (i=0;i<8;i++){
        if(*(s3+i)!='\0'){//用*(s3+i)或是s3[i]
            printf("s3[%d]=%c.\n", i, s3[i]);//逐一讀取字串中的字母
        }
        else{
            printf("s3[%d]='\\0'\n", i);//字串結尾用'\0'來進行分割
        }
    }
}