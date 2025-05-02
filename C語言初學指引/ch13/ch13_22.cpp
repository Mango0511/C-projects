#include <stdio.h>
#include <stdlib.h>
#include "./lotto.h"

int main(int argc ,char *argv[]){
    int i,special, ball_qty = 6,temp;

    int* lotto;

    if(argc>1){
        ball_qty = atoi(argv[1]);
        if(ball_qty == 0 ){
            printf("Wrong parameter\n");
            return -1;
        }
        if(!((ball_qty>=1)&&(ball_qty<=48))){
            printf("Wrong number , not in range\n");
            return -1;
        }
    }
    lotto = new int[ball_qty];
    generate_lotto_sort(&special, lotto, ball_qty);
    printf("Lotto numebrs showed below: \n");
    for(i=0;i<ball_qty;i++){
        printf("%d\t",lotto[i]);
    }

    if (ball_qty==1){
        delete lotto;
    }
    else{
        delete [] lotto;
    }
    printf("\n");
    printf("Special number is %d .\n", special);
    return 1;
}