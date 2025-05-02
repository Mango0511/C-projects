#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * link;
};

typedef struct Node node;
typedef node *nodepointer;

nodepointer GetNode();
void ErrorExit();
nodepointer insertLast(nodepointer L, int d);
nodepointer insertFirst(nodepointer L, int d);
nodepointer Last(nodepointer L);
nodepointer before(nodepointer L, nodepointer m);

nodepointer GetNode(){
    nodepointer n ;
    n = (nodepointer) malloc (sizeof(node));
    if(n==NULL){
        printf("No enough memory\n");
        exit(1);
    }

    return n;
}

void ErrorExit(){
    printf("Error! Exit!\n");
    exit(1);
}

nodepointer insertFirst(nodepointer L, int d){
    nodepointer n;
    n = GetNode();
    n->data = d;
    n->link = NULL;
    L = n ;
    return L;
}


nodepointer insertLast(nodepointer L, int d){
    nodepointer n ,LN;
    if(L==NULL){
        L = insertFirst(L, d);
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

nodepointer before(nodepointer L,nodepointer m){
    nodepointer Trace;
    if(L==NULL){
        ErrorExit();
    }
    Trace = L;
    printf("m = %p\n",(void *) m);
    while(Trace->link->data!=m->data){
        Trace = Trace->link;
        printf("Trace->data = %d, m->data = %d\n",(void *) Trace->data,(void *) m->data);
    }
    return Trace;
}

// nodepointer removeLast(nodepointer L){
//     nodepointer n ;
//     n = Last(L);
//     return L;
// }

nodepointer noderemove(nodepointer L, nodepointer m){
    nodepointer b;
    if(L==NULL){
        ErrorExit();
    }
    if(Last(L)!=NULL){
        b = before(L,m);
        printf("True\n");
        b->link = m->link;
    }
    else{
        L=m->link;
    }

    free(m);
    return L;
}

int main(){
    nodepointer Balls = NULL, visit = NULL;
    // nodepointer e = NULL;
    nodepointer l1  = NULL;
    l1 = insertLast(l1, 1);
    l1 = insertLast(l1, 2);
    l1 = insertLast(l1, 4);
    // printf("%d ", l1);

    nodepointer l2 = NULL;
    l2 = insertLast(l2, 1);
    l2 = insertLast(l2, 3);
    l2 = insertLast(l2, 4);
    while((l1!=NULL)&&(l2!=NULL)){
        if ((l1->data)<(l2->data)){
            Balls = insertLast(Balls, l1->data);
            l1 = l1->link;
        }
        else if ((l1->data)>(l2->data)){
            Balls = insertLast(Balls, l2->data);
            l2 = l2->link;
        }
        else{
            Balls = insertLast(Balls, l2->data);
            Balls = insertLast(Balls, l1->data);
            l1 = l1->link;
            l2 = l2->link;
        }
    }
    // Balls = insertLast(Balls, 27);
    // Balls = insertLast(Balls, 13);
    // Balls = insertLast(Balls, 16);
    // Balls = insertLast(Balls, 32);
    // Balls = insertLast(Balls, 18);
    // Balls = insertLast(Balls, 15);
    // e = insertLast(e, 15);
    // Balls = insertLast(Balls, 22);
    // noderemove(Balls, e);

    printf("Ball number is (the last one is the special number): \n");
    visit = Balls;
    while(visit!=NULL){
        printf("%d ", visit->data);
        visit = visit->link;
    }

    // noderemove(nodepointer L, nodepointer m)
    return 0 ;
}