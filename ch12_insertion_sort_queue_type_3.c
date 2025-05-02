#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

typedef struct Node{
    int data;
    struct Node *link;
}node;

typedef node *nodepointer;
nodepointer GetNode();
void ErrorExit();
nodepointer Last(nodepointer L);
nodepointer InsertLast(nodepointer L, int d);
nodepointer InsertFirst(nodepointer L, int d);

void ErrorExit();


nodepointer GetNode(){
    nodepointer n;
    n = (nodepointer) malloc (sizeof(node));
    if(n==NULL){
        printf("No memory!\n");
        exit(1);
    }
    return n;
}

nodepointer InsertFirst(nodepointer L, int d){
    nodepointer n;
    n = GetNode();
    n->data = d;
    n->link = NULL;
    L = n;
    return n;
}

nodepointer InsertLast(nodepointer L, int d){
    nodepointer n,LN;
    if(L==NULL){
        L = InsertFirst(L,d);
    }
    else{
        n = GetNode();
        LN = Last(L);
        n->data = d;
        n->link = NULL;
        LN->link = n;
    }
    return L;
}

nodepointer Last(nodepointer L){
    nodepointer Trace;
    if(L==NULL){
        ErrorExit();
    }
    Trace = L;
    while(Trace->link!=NULL){
        Trace = Trace->link;
    }
    return Trace;
}

void main(){
    int input[5] = {24,21,16,42,25};
    int i = 0 ;
    nodepointer numbers = NULL, Queue = NULL;

    for(i=0;i<5;i++){
        numbers = insertLast(numbers,input[i]);
    }
    
    Queue = numbers;
    while(Queue!=NULL){
        printf("%d ", Queue->data);
        Queue = Queue->link;//指到下一個數字
    }
};
