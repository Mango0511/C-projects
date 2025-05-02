#include <stdio.h>
#include <iostream>

using namespace std;

int main(void){
    int a1,a2;
    float b;
    char s[100];
    int *p;

    p = &a2;
    cout << "Please enter a1, a2:\n";
    cin>>a1>>*p;
    cout<<"Please enter b:";
    cin>>b;
    cout<<"Please enter string s:\n";
    cin>>s;
    cout<<"a1="<<a1<<"a2="<<a2<<"\tb="<<b<<"\ts="<<s<<endl;



    return 0;
}