#include <iostream>

using namespace std;

int main(){
    int a = 1;
    float b = 2.3;
    char *s = "Hello C++";
    int *p;

    p = &a;
    cout<<"a="<<a<<"\n"<<endl;
    cout<<"b="<<b<<"\n"<<endl;
    cout<<"s="<<s<<"\n"<<endl;
    cout<<"p="<<p<<"\n"<<endl;

    return 0;
}