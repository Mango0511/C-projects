#include <stdio.h>
#include <stdlib.h>

#define MaxStackSize 100

typedef struct{
    int stack[MaxStackSize];
    int top;

}StackADT;

StackADT CreateStack(){
    StackADT NewStack;
    NewStack.top = -1;
    return NewStack;
}

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
        printf("Stack is full\n");
        exit(1);
    }
    else{
        S->stack[++S->top] = item;
    }
}

int pop(StackADT *S){
    if(isEmpty(*S)==1){
        printf("Stack is empty\n");
        exit(1);
    }
    else{
        return S->stack[S->top--];
    }
}

void main(void){
    int data;
    StackADT S1;
    S1 = CreateStack();


    push(&S1,10);
    push(&S1,20);
    push(&S1,30);
    data=pop(&S1);
    printf("data=%d\n",data);
    data = pop(&S1);
    printf("data=%d\n",data);
    printf("S1=%d\n",S1.stack[2]);
}