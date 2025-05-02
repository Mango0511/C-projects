#include <stdio.h>
#include <stdlib.h>

int Binarysearch(int Target, int *arr, int arr_index){
    int Low, Upper, m;

    Low = 0;
    Upper = arr_index -1;
    while(Low<=Upper){
        m=(Low+Upper)/2;
        if(arr[m]==Target){
            return m;
        }
        else{
            if(arr[m]>Target){
                Upper = m-1;
            }
            else{
                Low = m+1;
            }
        }
    }
    return -1;
}

void main(){
    int work[8] = {33,41,52,54,63,74,79,86};
    int FindeNumber,location;

    printf("Enter the target number :");
    scanf("%d", &FindeNumber);
    location = Binarysearch(FindeNumber,work,8);
    if(location==-1){
        printf("Number not found\n");
    }
    else{
        printf("Number %d is at work[%d] . \n", FindeNumber, location);
    }
}