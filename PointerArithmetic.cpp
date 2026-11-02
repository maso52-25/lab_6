#include <iostream>
using namespace std;
int main(){
    int*pPointer = nullptr;
    int numbersArray[3]={10,20,30};

    pPointer = numbersArray;
    cout<<"Adress of pPointer: "<<pPointer<<endl;
    cout<<"Adress of numbersArray[0]: "<<numbersArray<<endl;

    cout<<"Value of pPointer: "<<*(++pPointer)<<endl;

    pPointer = numbersArray;
    cout<<"Value of pPointer: "<<*(pPointer++)<<endl;
    return 0;
}