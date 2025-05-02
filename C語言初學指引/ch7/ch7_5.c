#include <stdio.h>
#include <stdlib.h>

void print99(void);
void print99(void){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            printf("%d*%d = %d\t",i,j,i*j);
        }
        printf("\n");
    }
}

void main(){
    // printf("");
    print99();
}