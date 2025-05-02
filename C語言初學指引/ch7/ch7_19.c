#include <stdio.h>
#include <stdlib.h>

int Seqsearch(int Target, int *arr, int arr_index){
    int i;
    for(i=0;i<arr_index;i++){
        if(Target==arr[i]){
            return i ;
        }
    }
    return -1;
}

void main(){
    int work[11] = {43,23,67,27,39,15,39,37,57,26,14};
    int FindNumber, location;
    printf("Please enter the number you are finding : ");
    scanf("%d",&FindNumber);
    location = Seqsearch(FindNumber,work,11);
    if(location==-1){
        printf("Can't find the target number in array .\n");
    }
    else{
        printf("Number %d is at work[%d]",FindNumber,location);
    }


}