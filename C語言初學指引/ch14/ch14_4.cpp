#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream readfile;
    string filename;
    cout<<"Please enter the file name: ";
    cin>>filename;
    readfile.open(filename.c_str(),ios::in);

    if(readfile.fail()){
        cout<<"File"<<filename<<"Open failed"<<endl;
        exit(1);
    }

    cout<<"File"<<filename<<"Opening..."<<endl;
    readfile.close();
    cout<<"File"<<filename<<"Closed"<<endl;
    return 0;

}