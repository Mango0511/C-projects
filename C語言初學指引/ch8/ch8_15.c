#include <stdio.h>
#include <stdlib.h>

void print99(int *n,int p, int q){
    int i ,j;
    for(i=1;i<=p;i++){
        for(j=1;j<=q;j++){
            // *(*(m+(i-1))+(j-1)) = i*j;//*(m+(i-1)) = m[i]
            printf("%d * %d = %d \t",i,j,*(n+(i-1)*q+(j-1)));// n = &m
        }
        printf("\n");
    }
}

void main(){
    int m[9][9];//陣列表示法
    int i,j;

    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            m[i-1][j-1] = i*j;//*(m+(i-1)) = m[i]
        }
    }
    print99(m,9,9);//m是二維陣列，也是指標的指標
    // for(i=1;i<=9;i++){
    //     for(j=1;j<=9;j++){
    //         printf("%d * %d = %d \t",i,j,m[i][j]);
    //     }
    //     printf("\n");
    // }

}