#include <stdio.h>
#include <stdlib.h>

double Power(double, int);

double Power(double X, int n){
    int i ;
    double PowerXn = 1;

    for(i=0;i<=n;i++){
        PowerXn = PowerXn * X;
    }
    return PowerXn;
}

void main(void){
    int k;
    double Ans;

    printf("Calculate the power of 3.5 ? please enter k = ");
    scanf("%d", &k);
    Ans = Power(3.5,k);
    printf("%d power of 3.5 is %f .\n", k, Ans);

}