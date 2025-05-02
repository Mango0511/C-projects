#include <stdio.h>
#include <stdlib.h>

class myclass{
    public:
        int VarA;
        myclass();//宣告建構函式，一定要和類別名稱一樣，一定要在public
        void ShowVar();
    private:
        int VarB;

};

myclass::myclass(){
    VarA = 0;
    VarB = 0;ch
    printf("Member data initialized\n");
}

void myclass::ShowVar(){
    printf("VarA = %d . \n", VarA);
    printf("VarB = %d . \n", VarB);
}

int main(void){
    myclass A;
    A.ShowVar();

    return 0 ;
}