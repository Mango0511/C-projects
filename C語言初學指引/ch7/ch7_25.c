#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SeqSearch(int Target, int *arr, int arr_index);
void generate_lotto(int *special, int *arr, int arr_index);


int SeqSearch(int Target, int *arr, int arr_index)
{
    int i;
    for(i=0;i<arr_index;i++){
        if(Target==arr[i]){
            return i;
        }
    }
    return -1;

}


void generate_lotto(int *special , int *arr, int arr_index)
{
    int i ,generate_num;
    srand((unsigned) time (NULL));
    for(i=0;i<arr_index;i++){
        generate_num = rand()%49+1;
        while(SeqSearch(generate_num,arr,i+1)!=-1){
            generate_num = rand()%49+1;
        }
        *(arr+i) = generate_num;
    }
    generate_num = rand()%49+1;
    while(SeqSearch(generate_num,arr,i)!=-1){
        generate_num = rand()%49+1;
    }
    *special = generate_num;
}

// void main(){
//     int a = 50, b;
//     int *ptr;
    
//     printf("a = %d .\n", a);
//     ptr = &a;//ptr指向a變數的位址
//     printf("*ptr = %d . \n", *ptr);
//     b = *ptr; // b=*ptr=a,因此b = a
//     printf("b = %d. \n", *ptr);
// }

int main(int argc, char *argv[]){
    int lotto[49], i, special, ball_qty=6;

    if(argc>1){
        ball_qty = atoi(argv[1]);
        if((ball_qty<=0)||(ball_qty>48)){
            return 1;
        }
    }
    generate_lotto(&special, lotto, ball_qty);

    printf("Lotto number showed below : \n");
    for(i=0;i<ball_qty;i++){
        if(((i%6)==0)&&(i!=0)){
            printf("\n");
        }
        printf("%d\t",lotto[i]);
    }
    printf("\n");
    printf("Special number : %d .\n", special);

    return 0;
}