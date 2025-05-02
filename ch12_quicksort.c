#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int i, j, k, temp;
    int output[100];
}quicksort;

quicksort quickSort(int x[], int left, int right){
    quicksort QuickSort;
    // int i, j, k, temp;
    // int *output;
    // if(left<right){
    QuickSort.i=left+1;
    QuickSort.j=right;
    QuickSort.k=x[left];
    if(left<right){
        do{
            while(x[QuickSort.i]<QuickSort.k){
                QuickSort.i+=1;
                // printf("True, %d\n",QuickSort.i);
                    }
            while(x[QuickSort.j]>QuickSort.k){
                QuickSort.j-=1;
            }
            if(QuickSort.i<QuickSort.j){
                QuickSort.temp = x[QuickSort.i];
                x[QuickSort.i]=x[QuickSort.j];
                x[QuickSort.j] = QuickSort.temp;
            }
        }while(QuickSort.i<QuickSort.j);
        QuickSort.temp=x[left];
        x[left]=x[QuickSort.j];
        x[QuickSort.j]=QuickSort.temp;
        quickSort(x,left,QuickSort.j-1);
        quickSort(x,QuickSort.j+1,right);
    }
    int L;
    for(L=left;L<=right;L++){
        QuickSort.output[L] = x[L];
    }
    return QuickSort;
}


void main(void){
    int input[]={30,24,27,16,29,33,25,18,32,35};

    quicksort func;
    func = quickSort(input,0,9);

    int *output = func.output;
    int i;
    for(i=0;i<10;i++){
        printf("Output[%d] = %d .\n", i, output[i]);
    };

}