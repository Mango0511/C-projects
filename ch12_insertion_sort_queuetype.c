#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct Node{//定義結構
    int data;
    struct Node *link;//自我參考，因為指標沒有只到東西很危險
}node;

// typedef struct Node node;//結構別名
typedef node *nodepointer;//結構指標型態

nodepointer Getnode();//結構指標函數
void ErrorExit();//錯誤偵測函數
nodepointer insertfirst(nodepointer L, int d);
nodepointer Last(nodepointer L);
nodepointer insertLast(nodepointer L, int d);

nodepointer Getnode(){
    nodepointer Newnode;
    Newnode = (nodepointer) malloc (sizeof(node));
    //重新分配記憶體空間，只有在需要心結點的時候才項系統要求配置記憶體空間
    //相比原本的是先宣告陣列大小Ex: stack[100]，這樣就可以宣告剛好需要使用的記憶體量
    if(Newnode==NULL){
        printf("No enough memory\n");
        exit(1);
    };
    return Newnode;
}

void ErrorExit(){
    printf("Error! Exit!\n");
    exit(1);
}

nodepointer insertfirst(nodepointer L, int d){
    nodepointer Newnode;
    Newnode = Getnode();
    Newnode->data = d;
    Newnode->link = L;
    L = Newnode;
    return L;
}

nodepointer insertLast(nodepointer L, int d){
    nodepointer Newnode, LastNULLPoint;
    if(L==NULL){
        L = insertfirst(L,d);
    }
    else{
        Newnode = Getnode();
        LastNULLPoint = Last(L);
        Newnode->data = d;
        Newnode->link = NULL;
        LastNULLPoint->link = Newnode;
    };
    return L;
}

nodepointer Last(nodepointer L){//確認是結尾
    nodepointer Trace;
    if(L==NULL){//檢查是不是指到NULL，指到NULL就是結尾
        ErrorExit();
    }
    Trace = L;
    while(Trace->link!=NULL){
        Trace=Trace->link;
    };
    return Trace;
}



int main(void){
    nodepointer numbers=NULL, Queue = NULL;
    int input[5] = {24,21,16,42,25};
    int i ;
    for(i=0;i<5;i++){
        // printf("%d\n", input[i]);
        numbers = insertLast(numbers,input[i]);
    };

    // numbers = insertLast(numbers, 27);
    // numbers = insertLast(numbers, 13);
    // numbers = insertLast(numbers, 16);
    // numbers = insertLast(numbers, 32);
    // numbers = insertLast(numbers, 18);
    // numbers = insertLast(numbers, 15);

    Queue = numbers;
    while(Queue!=NULL){
        printf("%d ", Queue->data);
        Queue = Queue->link;//指到下一個數字
    }
    return 0;
}