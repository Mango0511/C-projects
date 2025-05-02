#include <stdio.h>
#include <stdlib.h>

int Odd(int U);
int Even(int U);
int TotalSum(int U);


void main(){
    int n, Sum;
    char AddChoice;

    printf("1+2+.....+n=?");
    scanf("%d", &n);
    fflush(stdin);
    printf("Please choose to Odd Even or TotalSum ?");

    scanf("%c",&AddChoice);

    switch(AddChoice){
        case'O':
            Sum = Odd(n);
            break;
        case'E':
            Sum = Even(n);
            break;
        case'T':
            Sum = TotalSum(n);
            break;
        default:
            printf("Wrong choice\n");
            break;
    }
    printf("Total sum is : %d . \n", Sum);

}

int Odd(int U){
    int i , total=0;
    for(i=1;i<=U;i++){
        if(i%2==1){
            total+=i;
        }
    }
    return total;
}

int Even(int U){
    int i,total=0;
    for(i=1;i<=U;i++){
        if(i%2==0){
            total+=i;
        }
    }
    return total;
}

int TotalSum(int U){
    return Odd(U)+Even(U);
}