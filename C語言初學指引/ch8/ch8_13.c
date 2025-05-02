#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *inverse(char *src){//指標函式，要回傳指標就得用指標函式，因為C語言的函式只能回傳一個值，回傳多個值就要用指標
    char *dest = (char*) malloc (sizeof(src)*2);//(資料型態) malloc (資料大小) 重新配置記憶體
    int i, len;
    len = strlen(src);//src = &input
    for (i=len-1;i>=0;i--){
        *(dest+len-1-i) = *(src+i);
    }
    *(dest+len) = '\0';
    return dest;//dest = inverse
}



void main(){
    char *s1 = "Welcome";//one dimesion array
    char *s2 = inverse(s1);//inverse回傳指標dest的內容的位址

    printf("s1 = %s\n",s1);
    printf("s2 = %s\n",s2);
}