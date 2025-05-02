#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct Node{//定義結構
    int data;
    struct Node *link;//指到Node結構的指標，自我參考機制
}node;

// typedef struct Node node;//Node結構別名node
typedef node *nodePointer;//node結構指標型態

nodePointer GetNode();
void ErrorExit();
nodePointer insertFirst(nodePointer L, int d);
nodePointer last(nodePointer L);
nodePointer insertLast(nodePointer L, int d);

nodePointer GetNode(){//定義GetNode結構指標
    nodePointer Newnode;//宣告結構指標
    Newnode = (nodePointer) malloc (sizeof(node));//malloc重新分配記憶體空間
    if(Newnode ==NULL){
        printf("Not enough memory");
        exit(1);
    }
    return Newnode;//回傳結構指標
}

void ErrorExit(){
    printf("Error!");
    exit(1);
}

nodePointer insertFirst(nodePointer L, int d){
    nodePointer n;
    n=GetNode();//若為空，則配置記憶體空間
    n->data = d;//存入資料d
    n->link = L;//存入指標L
    L=n;//將串列的開頭設置為結構指標n
    return L;
};

nodePointer insertLast(nodePointer L, int d){
    nodePointer n ,LastNP;
    if(L==NULL){//確認鏈結串列是否為空
        L=insertFirst(L,d);
    }
    else{//鏈結串列不為空
        n=GetNode();//分配記憶體空間
        LastNP = last(L);
        n->data = d;//存入資料d
        n->link = NULL;//存入指標NULL，因為是結尾
        LastNP->link = n;//上一個結構的指標要改為指到現在這個結構
    }
    return L;
};

nodePointer last(nodePointer L){//從後方放入鏈結串列
    nodePointer Trace;
    if(L==NULL){
        ErrorExit();
    }
    Trace = L;
    while(Trace->link!=NULL){
        Trace = Trace->link;
    };
    return Trace;
};

void main(void){
    nodePointer Balls = NULL, visit = NULL;
    Balls = insertLast(Balls, 27);
    Balls = insertLast(Balls, 13);
    Balls = insertLast(Balls, 16);
    Balls = insertLast(Balls, 32);
    Balls = insertLast(Balls, 18);
    Balls = insertLast(Balls, 15);
    Balls = insertLast(Balls, 22);

    printf("Ball number is (the last one is the special number): \n");
    visit = Balls;
    while(visit!=NULL){
        printf("%d ", visit->data);
        visit = visit->link;
    }

};