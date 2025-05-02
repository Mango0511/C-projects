#include <stdio.h>
#include <stdlib.h>

class myclass{
    public:
        int VarA;
        myclass(int,int);
        void ShowVar();

    private:
        int VarB;

};

myclass::myclass(int a, int b){
    VarA = a;
    VarB = a+b;

}

void myclass::ShowVar(){
    printf("VarA = %d .\n",VarA);
    printf("VarB = %d .\n",VarB);
}

int main(){
    myclass X(3,10),Y(5,40);
    X.ShowVar();
    Y.ShowVar();
    
    return 0;
}