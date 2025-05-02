#include <stdio.h>
#include <stdlib.h>

#define MaxStackSize  100


typedef struct{
    int stack[MaxStackSize];
    int top;
}StackADT;

StackADT CreatStack(){//結構函式，用來設置top的初始值，因為結構在定義的時候不能直接宣告初始值
    StackADT NewStack;//宣告結構變數NewStack
    NewStack.top=-1;//設置結構中的top初始值
    return NewStack;//回傳至結構StackADT
}


//以下操作其實都在對結構StackADT中的stack陣列進行運算
int isEmpty(StackADT S){
    if(S.top<0){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(StackADT S){
    if(S.top>=MaxStackSize-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(StackADT *S, int item){
    if(isFull(*S)==1){
        printf("Stack is full \n");
        exit(1);
    }
    else{
        S->stack[++S->top]=item;
    }
}

int pop (StackADT *S){
    if(isEmpty(*S)==1){
        printf("Stack is empty \n");
        exit(1);
    }
    else{
        return S->stack[S->top--];
    }
}


void main(void){
    int data;

    StackADT S1;
    S1 = CreatStack();

    push(&S1,10);
    push(&S1,20);
    push(&S1,30);
    data=pop(&S1);
    printf("data=%d\n",data);
    data = pop(&S1);
    printf("data=%d\n",data);
}