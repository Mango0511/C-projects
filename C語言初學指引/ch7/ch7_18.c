#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void generate_lotto(int *arr, int arr_index){
    int i;
    srand((unsigned) time (NULL));
    printf("Unpacking lotto numbers ...\n");
    for(i = 0 ; i<arr_index ;i++){
        arr[i] = rand()%49+1;
        printf("The %dth number is %d .\n", i, arr[i]);
    }
}

void main(){
    int lotto[6],i;
    generate_lotto(lotto,6);
    printf("The lotto number showed below :\n");
    for(i=0;i<6;i++){
        printf("%d\t",lotto[i]);
    }
    printf("\n");


}