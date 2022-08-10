#include<iostream>
using namespace std;

int main(){

    int max=-99999;
    int min=99999;
    
    int num=0;

    while(true){    // this will be infinite loop due to true  
        cout<<"Enter Number ";
        cin>>num;
        if(num==-99){
            break;  // this will terminate the loop
        }
        if(num>max){
            max=num;
        }
        if(num<min){
            min=num;
        }
    }

    cout<<"Max number is "<<max<<endl;
    cout<<"Min number is "<<min<<endl;
    

}