#include <stdio.h>
#include <stdlib.h>

#define MaxStackSize 100

class StackADT{
    private:
        int stack[MaxStackSize];
        int top;
        bool isEmpty(){
            if(top<0){
                return true;
            }
            else{
                return false;
            }
        }
        bool isFull(){
            if(top>=MaxStackSize-1){
                return true;
            }
            else{
                return false;
            }
        }
    public:
        StackADT(){
            top = -1;
        }
        void push(int item){
            if(isFull()==true){
                printf("Stack is Full!\n");
                exit(1);
            }
            else{
                stack[++top] = item;
            }
        }
        int pop(){
            if(isEmpty()==true){
                printf("Stack is Empty!\n");
                exit(1);
            }
            else{
                return stack[top--];
            }
        }
};

int main(void){
    int data;
    StackADT S1;

    S1.push(10);
    S1.push(20);
    S1.push(30);
    data = S1.pop();
    printf("data = %d . \n",data);
    data = S1.pop();
    printf("data = %d . \n",data);

    return 0;
}