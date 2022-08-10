#include<iostream>
using namespace std;

int main(){
    cout<<"Hello World";
    int a=0;
    float b=0.0;
    char c='a';
    double d=0.0;

    cout << endl;
    cout << "A char consumes " << sizeof(c) << " byte." << endl;
    cout << "An int consumes " << sizeof(a) << " bytes. " << endl;
    cout << "A float consumes " << sizeof(b) << " bytes. " << endl;
    cout << "A double consumes " << sizeof(d) << " bytes. " << endl;
    cout << endl;

    return 0;
}