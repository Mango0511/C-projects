#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(void){
    ifstream readfile;
    ofstream writefile;
    string filename1,filename2;
    char c;

    cout<<"Please enter the source file name: ";
    cin>>filename1;
    cout<<"Please enter the destination file name: ";
    cin>>filename2;
    
    readfile.open(filename1.c_str());
    writefile.open(filename2.c_str(),ios::out|ios::trunc);

    if(readfile.fail()){
        cout<<"File reading error\n";
        exit(1);
    }

    cout<<"Reading and writing ...\n";
    while(readfile.get(c)){
        cout<<c;
        writefile.put(c);
    }

    cout<<"\nReading and writing finished\n"<<endl;
    readfile.close();
    writefile.close();
    return 0;
}