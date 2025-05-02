#include <stdio.h>
#include <stdlib.h>

long int factorial(int p);
long int factorial(int p){
    int count ;
    long int result =1;

    for(count= 1;count<=p;count++){
        result=result *count;
    }
    return result;
}



void main(){
    int m,n;
    long int ans;
    long int temp[3];

    printf("Calculate C(m,n)\n");
    printf("m = ");
    scanf("%d",&m);
    printf("n = ");
    scanf("%d",&n);

    temp[0] = factorial(m);
    temp[1] = factorial(n);
    temp[2] = factorial(m-n);

    ans = temp[0]/(temp[1]*temp[2]);
    printf("Answer is %d . \n", ans);

}