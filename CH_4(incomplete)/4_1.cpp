// Write a program that asks the user to enter two numbers. The program should use the
// conditional operator to determine which number is the smaller and which is the larger.

#include<iostream>
using namespace std;
int main(){
    int num1,num2;

    cout<<"Enter first number ";
    cin>>num1;
    cout<<"Enter second number ";
    cin>>num2;

    if(num1>num2){
        cout<<"First Number is largest"<<endl;
    }
    else {
        cout<<"Second number is largest"<<endl;
    }
}