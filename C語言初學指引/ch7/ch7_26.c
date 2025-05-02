#include <stdio.h>
#include <stdlib.h>
#include "./lotto.h"

int main(int argc, char *argv[]){
    int lotto[49], i, special, ball_qty=6;
    // printf("argc = %d .\n", argc);
    if(argc>1)
    {
        ball_qty=atoi(argv[1]);
        if(ball_qty==0){
            printf("Wrong parameter\n");
            return -1;
        }
        if(!(generate_lotto_sort(&special,lotto,ball_qty)))
        {
            printf("Wrong parameter");
            return -1;
        }
    }
    else
    {
        generate_lotto_sort(&special, lotto, ball_qty);
    }
    
    printf("Lotto number showed below : \n");
    for(i=0;i<ball_qty;i++){
        if((i%6==0)&&(i!=0)){
            printf("\n");
        }
        printf("%d\t",lotto[i]);
    }
    printf("\n");
    printf("Special number : %d .\n",special);
    return 1;
}