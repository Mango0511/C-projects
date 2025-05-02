#include <stdio.h>
#include <stdlib.h>

class myclass{
    public:
        myclass();
        ~myclass();
    private:
};

myclass::myclass(){
    printf("constructor programming...\n");
};

myclass::~myclass(){
    printf("Destructor programming...\n");
};


int main(void){
    printf("Programming...\n");
    printf("Generating objects...\n");

    myclass X;
    printf("Object generated\n");

    printf("Program ending...\n");

    return 0 ;
}