#include <stdio.h>
#include<stdlib.h>

class myclass{
    public:
        int VarA;
        void ShowVar();
    private:
        int VarB;
};

void myclass::ShowVar(){
    printf("VarA = %d .\n", VarA);
    printf("VarB = %d .\n", VarB);
}

int main(void){
    int i ;
    myclass X[3];

    printf("Before initializing...\n");
    for(i=0;i<3;i++){
        X[i].ShowVar();
    }

    for(i = 0;i<3;i++){
        X[i].VarA = 0;
    }
    printf("After initializing...\n");
    for(i=0;i<3;i++){
        X[i].ShowVar();
    }


    return 0;

}