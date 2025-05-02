#include <stdio.h>
#include <stdlib.h>

class myclass{
    public:
        int Sum(int ,int );
        double Sum(double, double);
        int Sum(int,int,int);
        double Sum(double, double, double);
};

int myclass::Sum(int a, int b){
    return a+b;
}

double myclass::Sum(double a,double b){
    return a+b;
}

int myclass::Sum(int a ,int b, int c){
    return a+b+c;
}

double myclass::Sum(double a, double b, double c){
    return a+b+c;
}

int main(void){
    myclass X;
    // X.Sum(1,2);
    printf("%d\n", X.Sum(1,2));
    printf("%f\n", X.Sum(1.1,2.2,3.3));
    printf("%f\n", X.Sum(1.1,2.2));
    printf("%d\n", X.Sum(1,2,3));
    // printf("%d")

    return 0;
}