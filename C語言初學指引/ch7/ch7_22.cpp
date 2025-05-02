#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SeqSearch(int Target, int *arr, int arr_index);
void generate_lotto(int *special, int *arr, int arr_index=6);

int SeqSearch(int Target, int *arr, int arr_index){
    int i =0;
    for(i=0;i<arr_index;i++){
        if(Target==arr[i]){
            return i;
        }
    }
    return -1;
}

void generate_lotto(int *special, int *arr, int arr_index){
    int i,generate_num;
    srand((unsigned) time (NULL));
    for(i=0;i<arr_index;i++){
        generate_num = rand()%49+1;
        while(SeqSearch(generate_num, arr, i+1)!=-1){
            generate_num = rand()%49+1;
        }
        arr[i] = generate_num;
    }
    generate_num = rand()%49+1;
    while(SeqSearch(generate_num, arr, i)!=-1){
        generate_num = rand()%49+1;
    }
    *special = generate_num;
}


int main(void){
    int lotto[6],i,special;
    generate_lotto(&special,lotto);
    for(i=0;i<6;i++){
        printf("%d\t",lotto[i]);
    }
    printf("\n");
    printf("Special number is %d .\n", special);
    return 0;


}