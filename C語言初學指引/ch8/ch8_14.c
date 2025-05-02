#include <stdio.h>
#include <stdlib.h>

void main(){
    int m[9][9];
    int i,j;

    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            *(*(m+(i-1))+(j-1)) = i*j;//*(m+(i-1)) = m[i]
        }
    }
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            printf("%d * %d = %d \t",i,j,m[i][j]);
        }
        printf("\n");
    }

}