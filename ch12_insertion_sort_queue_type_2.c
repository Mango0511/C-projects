#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct Node{
    int data;
    struct Node *link;
}node;

typedef node *nodepointer;

nodepointer GetNode();
nodepointer insertFirst(nodepointer L, int d);
nodepointer Last(nodepointer L);
nodepointer insertLast(nodepointer L, int d);
void ErrorExit();

nodepointer GetNode(){
    nodepointer n;
    n = (nodepointer) malloc (sizeof(node));
    if(n==NULL){
        printf("No enough memory!\n");
        exit(1);
    }
    return n;
}

void ErrorExit(){
    printf("Error!\n");
    exit(1);
}

nodepointer insertFirst(nodepointer L, int d){
    nodepointer n;
    n = GetNode();
    n->data = d;
    n->link = L;
    L = n;
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

nodepointer insertLast(nodepointer L, int d){
    nodepointer n, LastNP;
    if(L==NULL){
        L = insertFirst(L,d);
    }
    else{
        n = GetNode();
        LastNP = Last(L);
        n->data = d;
        n->link = NULL;
        LastNP->link = n;
    }
    return L;
}

int main(){
    nodepointer numbers=NULL,Queue=NULL;
    
    int input[5] = {24,21,16,42,25};
    int i ;
    for(i=0;i<5;i++){
        numbers = insertLast(numbers,input[i]);
    };

    Queue = numbers;
    while(Queue!=NULL){
        printf("%d ", Queue->data);
        Queue = Queue->link;//指到下一個數字
    }
    return 0;
}