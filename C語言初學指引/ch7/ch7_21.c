#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Seqsearch(int target, int *arr, int arr_index);
void generate_lotto(int *spec_num, int *arr, int arr_index);

int Seqsearch(int target, int *arr, int arr_index){
    int i ;
    for(i=0;i<arr_index;i++){
        if(target==arr[i]){
            return i;
        }
    }
    return -1;
}

void generate_lotto(int *spec_num, int *arr, int arr_index){
    int i , generate_num;
    srand((unsigned) time (NULL));
    for(i=0;i<arr_index;i++){
        generate_num = rand()%49+1;
        while(Seqsearch(generate_num, arr, i+1)!=-1){
            generate_num = rand()%49+1;//重複搜索陣列arr中是否已經有同樣的數字
        }
        arr[i] = generate_num;
    }
    generate_num = rand()%49+1;
    while(Seqsearch(generate_num, arr, i)!=-1){
        generate_num = rand()%49+1;
    }
    *spec_num = generate_num;//將特別號碼的指標內容改為新產生的亂數
}


void main(){
    int lotto[6], i, special;
    generate_lotto(&special, lotto, 6);
    printf("Lotto numbers showed below : \n");
    for(i=0;i<6;i++){
        printf("%d\t",lotto[i]);
    }
    printf("\n");
    printf("Special number is %d", special);
}