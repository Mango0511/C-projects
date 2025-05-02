#include <stdio.h>
#include <stdlib.h>

class myclass{
    public:
        double VarA;
        myclass();
        myclass(int,int);
        myclass(double,double);
        void ShowVar();
    private:
        double VarB;
};

myclass::myclass(){
    VarA = 10;
    VarB = 10;
};

myclass::myclass(int a, int b){
    VarA = a;
    VarB = a+b;
};

myclass::myclass(double a ,double b){
    VarA = a;
    VarB = a+b;
};

void myclass::ShowVar(){
    printf("VarA = %.2f . \n", VarA);
    printf("VarB = %.2f . \n", VarB);
}

int main(void){
    int i ;
    myclass X[3];
    myclass Y(5,40);
    myclass Z(20.3,30.6);

    for(i=0;i<3;i++){
        printf("object X[%d]\n",i);
        X[i].ShowVar();
    }

    printf("Y:\n");
    Y.ShowVar();

    Z.ShowVar();

    return 0;
}