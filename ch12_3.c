#include <stdio.h>
#include <stdlib.h>

#define MaxQueueSize 100

typedef struct{
    int cqueue[MaxQueueSize];
    int front;
    int rear;
}CQueueADT; 

CQueueADT CreateCQueue(){
    CQueueADT NewCQueue;
    NewCQueue.front = 0;//因為是環狀，所以初始值都設置為0，也因為這樣長度為n的環狀佇列只能放n-1個值
    NewCQueue.rear = 0;
    return NewCQueue;
}

int isEmpty(CQueueADT CQ){
    if(CQ.front==CQ.rear){//環狀佇列頭尾相同
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(CQueueADT CQ){
    if(CQ.front==CQ.rear){//環狀佇列頭尾相同
        return 1;
    }
    else{
        return 0;
    }
}

void AddCQ(CQueueADT *CQ, int item){
    CQ->rear=(CQ->rear+1)%MaxQueueSize;
    if(isEmpty(*CQ)==1){
        printf("CQueue is empty\n");
        exit(1);
    }
    else{
        CQ->cqueue[CQ->rear] = item;
    }
}

int DeleteCQ(CQueueADT *CQ){
    if(isFull(*CQ)==1){
        printf("CQueue is full\n");
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