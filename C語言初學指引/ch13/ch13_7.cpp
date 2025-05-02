#include <stdio.h>
#include <stdlib.h>

class myclass{
    public:
        void InitVar();
        void AddVar(int b);
        void ShowVar();
    private:
        int  Var;
        void RealShow();
};

void myclass::InitVar(){
    Var = 0;
}

void myclass::AddVar(int b){
    Var+=b;
}


void myclass::ShowVar(){
    RealShow();
}

void myclass::RealShow(){
    printf("Var = %d \n", Var);
}

int main(void){
    myclass X,Y;

    X.InitVar();
    Y.InitVar();

    X.AddVar(10);
    X.ShowVar();

    Y.AddVar(5);
    Y.ShowVar();
    Y.AddVar(3);
    Y.ShowVar();

    return 0;
}