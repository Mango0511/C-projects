#include <stdio.h>
#include <stdlib.h>

class myclass{
    public:
        int VarA;
        myclass(int a,int b);
        void ShowVar();
    private:
        int VarB;
};

myclass::myclass(int a = 0, int b = 0){
    VarA = a;
    VarB = a+b;
};

void myclass::ShowVar(){
    printf("VarA = %d .\n", VarA);
    printf("VarB = %d .\n", VarB);
};



int main(){
    myclass X,Y;
    X.ShowVar();
    Y.ShowVar();


    return 0;
}