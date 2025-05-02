#include <stdio.h>
#include <stdlib.h>

#define MaxCQueueSize 100

typedef struct{
    int cqueue[MaxCQueueSize];
    int front;
    int rear
}CQADT;

CQADT CreateCQ(){
    CQADT NewCQ;
    NewCQ.front = 0;
    NewCQ.rear = 0;
    return NewCQ;
}

int isFull(CQADT CQ);
int isEmpty(CQADT CQ);
void AddCQ(CQADT *CQ,int item);
int DeleteCQ(CQADT *CQ);

int isFull(CQADT CQ){
    if((CQ.front == CQ.rear)&&(CQ.rear==MaxCQueueSize-1)){
        return 1;
    }
    else{
        return 0 ;
    }
}

int isEmpty(CQADT CQ){
    if(CQ.front == CQ.rear){
        return 1;
    }
    else{
        return 0 ;
    }
}

void AddCQ(CQADT *CQ,int item){
    CQ->rear=(CQ->rear+1)%MaxQueueSize;
    if(isFull(*CQ)==1){
        printf("CQ is full\n");
        exit(1);
    }  
    else{
        CQ->cqueue[++CQ->rear] = item;
    } 
}


int Delete(CQADT *CQ){
    if(isEmpty){
        printf("CQ is empty\n");
        exit(1);
    }
    else{
        CQ->front=(CQ->front+1)%MaxQueueSize;
        return CQ->cqueue[CQ->front];
    }
}

void main(){
    int data;

    CQueueADT CQ1;
    CQ1 = CreateCQueue();

    AddCQ(&CQ1,10);
    AddCQ(&CQ1,20);
    AddCQ(&CQ1,30);
    data = DeleteCQ(&CQ1);
    printf("data = %d\n",data);
    data = DeleteCQ(&CQ1);
    printf("data = %d\n",data);


}