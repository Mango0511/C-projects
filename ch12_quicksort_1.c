void quickSort(int* nums, int head, int tail){
    if(head>=tail){return;}
    int comp=nums[head];
    int i=head,j=tail;
    while(i<j){
        while(nums[j]>=comp && i<j){j--;}//最後一個和第一個比較，一直找到後面屬過來的比第一個小為止
        nums[i]=nums[j];//找到後面比前面小的了，交換兩個值
        nums[j]=comp;
        while(nums[i]<=comp && i<j){i++;}
        nums[j]=nums[i];
        nums[i]=comp;
    }
    quickSort(nums,head,i-1);
    quickSort(nums,j+1,tail);
}
// void quicksort(int *num, int head ,int tail){
//     if(head>=tail){return;}
//     int comp=num[head];
//     int i=head,j=tail;
//     while(i<j){
//         while(num[j]>=comp && i<j){j--;}//當最後一個大於第一個最後一個大於等於第一個
//         num[i] = num[j];//
//         num[j] = comp;
//         while(num[i]<=comp && i<j){i++;}
//         num[j]=num[i];
//         num[i] = comp;
//     }
//     quicksort(num, head,i-1);
//     quicksort(num, j+1 , tail);
// }


// void quicksort(int *num,int head,int tail){
//     if(head>=tail){return;}
//     int comp=num[head];
//     int i =head,j=tail;
//     while(i<j){
//         while((num[j]>=comp&&i<j)){j--};
//         num[i]=num[j];
//         num[j]=comp;
//         while((num[i]<=comp&&i<j)){i++};
//         num[j]=num[i];
//         num[i]=comp;
//     }
//     quicksort(num,j+1,tail);
//     quicksort(num,head,i-1);
// }

int main(){
    int input[]={30,24,27,16,29,33,25,18,32,35};
    quickSort(input,0,9);

    // int *output = quickSort(input,0,9);
    int i;
    for(i=0;i<10;i++){
        printf("Output[%d] = %d .\n", i, input[i]);
    };

    return 0 ;
}