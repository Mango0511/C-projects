#include <stdlib.h>
#include <time.h>
#include "./useful_algorithm.h"

int generate_lotto(int *spec_num, int *arr, int arr_index);
int generate_lotto_sort(int *spec_num, int *arr, int arr_index);

int generate_lotto(int *spec_num, int *arr, int arr_index){
    int i , generate_num;
    srand((unsigned) time(NULL));
    
    if(!((arr_index>=1)&&(arr_index<=48))){
        return 0;
    }

    for(i=0;i<arr_index;i++){
        generate_num = rand()%49+1;
        while(SeqSearch(generate_num,arr,i+1)!=-1){
            generate_num = rand()%49+1;
        }
        arr[i] = generate_num;
    }
    generate_num = rand()%49+1;
    while(SeqSearch(generate_num,arr,i)!=-1){
        generate_num = rand()%49+1;
    }
    *spec_num = generate_num;
    return 1;
}

int generate_lotto_sort(int *spec_num , int *arr, int arr_index){
    if(generate_lotto(spec_num,arr,arr_index)){
        BubbleSort(arr,arr_index);
    }
    else{
        return 0;
    }
    return 1;
}