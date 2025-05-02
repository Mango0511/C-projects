#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./lotto.h"

int main(){
    int i, special, ball_qty=6, temp; 
    int *lotto;
    
    if (argc){
        ball_qty = atoi(argv[1]);
        if(ball_qty == 0){
            printf("Wrong parameter, input is not number \n");
            return -1;
        }
        if(!(ball_qty>=1)&&(ball_qty<=48)){
            printf("Wrong parameter, maybe input is not in 1~48 \n");
            return -1;
        }
    }
    lotto = (int *) malloc (sizeof(int)*ball_qty);
    generate_lotto_sort(&special,lotto,ball_qty);

    printf("The lotto numbers are :");
    for(i=0;i<ball_qty;i++){
        if((i%6==0)&&(i!=0)){
            printf("\n");
        }
        printf("%d\t",lotto[i]);
    }
    free(lotto);
    printf("\n");
    printf("Special number : %d \n", special);
    return 1;
}
