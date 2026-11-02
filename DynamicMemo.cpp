#include <iostream>
#include <string>
using namespace std;

int main(){

    //dynamically allocate memory for an integer & a string
    int *number = new int;
    string *name = new string;

    cout<<"Enter an integer: ";
    cin>>*number;

    cout<<"enter your name: ";
    cin >>*name;

    cout<<"Your integer is: "<<*number<<endl;
    cout<<"Your name is: "<<*name<<endl;

    //deallocate memory
    delete number;
    delete name;

    return 0;
}