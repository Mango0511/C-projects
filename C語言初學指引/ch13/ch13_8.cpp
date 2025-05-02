#include <stdio.h>
#include <stdlib.h>

class myclass{
    public:
        void InitVar(){
            Var = 0;
        }
        void AddVar(int b){
            Var+=b;
        }
        void ShowVar(){
            RealShow();
        }
    private:
        int Var;
        void RealShow(){
            printf("Var = %d . \n", Var);
        }
};

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