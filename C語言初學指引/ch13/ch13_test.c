#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *frontlink;
    struct Node *rearlink;
}node;

typedef node *nodepointer;

node Getnode(){
    node newnode;
    // newnode = (node) malloc (sizeof(node));
    newnode.data = 10;
    newnode.frontlink = 0;
    newnode.rearlink = 0;
    return newnode;
}




int main(void){
    node n;
    n = Getnode();
    printf("%d\n",n.data);
    printf("%d\n",n.frontlink);
    printf("%d\n",n.rearlink);

    return 0;
}