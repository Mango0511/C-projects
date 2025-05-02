#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct{
    int *output;
}insertion_sort;

insertion_sort Create_insertion_sort(int *x, int n){
    insertion_sort New_insertion_sort;
    int i,j,temp ;
    int *new_x = (int *) malloc (sizeof(int *)*(n+1));
    for(i=1;i<n+1;i++){
        new_x[i] = x[i-1];
        printf("new_x[%d] = %d. \n", i, new_x[i]);
    }
    new_x[0] = INT_MIN;
    for(j=2;j<=n;j++){
            temp = new_x[j];
            i = j-1;
            while(temp<new_x[i]){
                new_x[i+1] = new_x[i];
                i -= 1 ;
            };
            new_x[i+1]=temp;
    };
    printf("new_x[1] = %d. \n",new_x[1]);

    New_insertion_sort.output = new_x;
    printf("new_x[1] = %d. \n",New_insertion_sort.output[1]);

    // free(new_x);
    return New_insertion_sort;
};

void main(){
    int x[] = {24,21,16,42,25};
    insertion_sort Func1;
    printf("Size of x = %d .\n", sizeof(x)/sizeof(int));
    int size_of_x = sizeof(x)/sizeof(int);
    Func1 = Create_insertion_sort(x, size_of_x);
    int i = 0;
    int *output = Func1.output;
    for(i=0;i<size_of_x+1;i++){
        printf("Output[%d] = %d .\n", i, output[i]);
    };
}