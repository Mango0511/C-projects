
void BubbleSort(int *arr, int arr_index);
int SeqSearch(int Target, int *arr, int arr_index);
int BinarySearch(int Target, int *arr, int arr_index);

void BubbleSort(int *arr, int arr_index){
    int k, times, i, temp;

    k = arr_index -1;
    while(k!=0)
    {
        times = 0;
        for(i=0;i<k;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                times = i;
            }
        }
        k = times;
    }
}

int SeqSearch(int Target, int *arr, int arr_index){
    int i ;
    for(i=0;i<arr_index;i++){
        if(Target == arr[i]){
            return i;
        }
    }
    return -1;
}


int BinarySearch(int Target, int *arr, int arr_index){
    int Low, Upper, m;
    Low = 0;
    Upper = arr_index -1;
    while(Low<=Upper){
        m = (Low+Upper)/2;
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
