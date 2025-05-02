(int *num, int head ,int tail){
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