//雙向鏈結串列
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct Node {
    int data;
    struct Node *frontlink;
    struct Node *rearLink;
}node;

typedef node *nodepointer;
nodepointer GetNode();
void ErrorExit();
int isEmpty(nodepointer L);
// int isFull(nodepointer L);
nodepointer insertRight(nodepointer L, int d);
nodepointer insertLeft(nodepointer L, int d);
nodepointer insert(nodepointer L, int d);
nodepointer LeftLast(nodepointer L);
nodepointer RightLast(nodepointer L);

nodepointer GetNode(){
    nodepointer n;
    n = (nodepointer) malloc (sizeof(node));
    if(n==NULL){
        printf("No memory!\n");
        exit(1);
    }

    return n;
}

void ErrorExit(){
    printf("Error ! Exit !\n");
    exit(1);
}

nodepointer insert(nodepointer L, int d){//插入空串列
    nodepointer n;
    n = GetNode();
    n->data = d;
    n->frontlink = NULL;
    n->rearLink = NULL;
    L = n;
    return L;
}

nodepointer insertLeft(nodepointer L, int d){//插入到串列左邊
    nodepointer n, LeftNull;
    if(L==NULL){
        L = insert(L,d);
    }
    else{
        n = GetNode();
        LeftNull = LeftLast(L);
        // RightNull = RightLast(L);
        n->data = d;
        n->frontlink = NULL ;
        n->rearLink = LeftNull ;
        LeftNull->frontlink = n ;
        printf("True\n");
    }
    return L ;
}

nodepointer LeftLast(nodepointer L){//插入到串列左邊時，尋找左邊算起的第一個元素
    nodepointer Trace;
    if(L==NULL){
        ErrorExit();
    }
    Trace = L;
    while(Trace->frontlink!=NULL){//當串列左邊不是空的時候
        Trace = Trace->frontlink;//將串列再指到左邊的下一個非NULL元素
    }

    return Trace;
}

nodepointer insertRight(nodepointer L, int d){//插入到串列右邊
    nodepointer n, RightNull;
    if(L==NULL){
        L = insert(L,d);
    }
    else{
        n = GetNode();
        RightNull = RightLast(L);
        // RightNull = RightLast(L);
        n->data = d;
        n->frontlink = RightNull ;
        n->rearLink = NULL ;
        RightNull->rearLink = n ;
        printf("True\n");
    }
    return L ;
}

nodepointer RightLast(nodepointer L){//插入到串列左邊時，尋找左邊算起的第一個元素
    nodepointer Trace;
    if(L==NULL){
        ErrorExit();
    }
    Trace = L;
    while(Trace->rearLink!=NULL){//當串列左邊不是空的時候
        Trace = Trace->rearLink;//將串列再指到左邊的下一個非NULL元素
    }

    return Trace;
}

int isEmpty(nodepointer L){
    if(L==NULL){
        return 1;
    }
    else{
        return 0;
    }
}


int main(){
    nodepointer numbers = NULL, Queue = NULL;
    int input[5] = {24,21,16,42,25};
    int i ;
    // for(i=0;i<5;i++){
    //     numbers = insertLeft(numbers, input[i]);
    // }
    // Queue = numbers;
    // while(Queue!=NULL){
    //     printf("%d ", Queue->data);
    //     Queue = Queue->frontlink;//指到下一個數字
    // }

    for(i=0;i<5;i++){
        numbers = insertRight(numbers, input[4-i]);
    }
    Queue = numbers;
    while(Queue!=NULL){
        printf("%d ", Queue->data);
        Queue = Queue->rearLink;//指到下一個數字
    }

    // printf("Queue[0] = %p . ", Queue[0]);
    return 0;
}