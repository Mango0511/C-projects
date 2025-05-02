#include <stdio.h>
#include <stdlib.h>

class myclass{
    public:
        void SetVarA(int);
        void SetVarB(int);
        void ShowData();
    private:
        int VarA;
        int VarB;
};

void myclass::SetVarA(int value){
    this->VarA = value;
}

void myclass::SetVarB(int value){
    this->VarB = value;
}


void myclass::ShowData(){
    printf("VarA = %d. \n", VarA);
    printf("VarB = %d. \n", VarB);
}


int main(void){
    myclass ObjX;
    ObjX.SetVarA(100);
    ObjX.SetVarB(200);
    ObjX.ShowData();

    return 0 ;
}