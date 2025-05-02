#include <stdio.h>
#include <stdlib.h>

#define MaxQueueSize 100

typedef struct {
    int stack[MaxQueueSize];
    int front;
    int rear;
}QueueADT;


QueueADT CreateQueue(){
    QueueADT NewQueue;
    NewQueue.front = -1;
    NewQueue.rear = -1;
    return NewQueue;
}

int isEmpty(QueueADT Q){
    if(Q.rear<=Q.front){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(QueueADT Q){
    if(Q.rear>=MaxQueueSize){
        return 1;
    }
    else{
        return 0;
    }

}

void AddQ(QueueADT *Q, int item){
    if(isFull(*Q)==1){
        printf("Queue is full\n");
        exit(1);
    }
    else{
        Q->stack[++Q->rear] = item;
    }
}


int DeleteQ(QueueADT *Q){
    if(isEmpty(*Q)==1){
        printf("Queue is empty\n");
        exit(1);
    }
    else{
        return Q->stack[++Q->front];
    }
}

void main(){
    int data;

    QueueADT Q1;
    Q1 = CreateQueue();
    AddQ(&Q1,10);
    AddQ(&Q1,20);
    AddQ(&Q1,30);
    data = DeleteQ(&Q1);
    printf("data = %d\n",data);
    data = DeleteQ(&Q1);
    printf("data = %d\n",data);


}
