#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SeqSearch(int Target, int *arr, int arr_index);
void generate_lotto(int *special , int *arr, int arr_index);

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

int main(int argc, char* argv[]){
    int lotto[49], i ,special, ball_qty=6;

    if (argc>1){
        ball_qty=atoi(argv[1]);
    }
    generate_lotto(&special,lotto,ball_qty);

    printf("Lotto numebrs showed below : \n");
    for(i=0;i<ball_qty;i++){
        if((i%6==0)&&(i!=0)){
            printf("\n");
        }
        printf("%d\t",lotto[i]);
    }
    printf("\n");
    printf("Special number : %d .\n", special);

    return 0;

}

// int  main(int argc, char *argv[]){
//     int ball_number;
//     printf("Please enter the ball number you want : ");
//     scanf("%d",&ball_number);
//     if(ball_number<=48){
//         printf("The ball number you enter is %d .\n", ball_number);
//     }
//     else{
//         printf("Too much number! Exit!");
//         exit(1);
//     }

//     int i, *special, *lotto;
//     lotto = (int *) malloc (sizeof(int)*ball_number);
//     generate_lotto(special, lotto, ball_number);
//     printf("Lotto number showed below :\n");
//     for(i = 0;i<ball_number;i++){
//         printf("%d ", lotto[i]);
//     }
//     printf("\n");
//     printf("The special number is %d .\n", *special);
//     return 0;
// }