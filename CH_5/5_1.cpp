#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int user_number=0;

    cout<<"Enter Positive Number ";
    cin>>user_number;

    for(int count = 0 ; count <=user_number ; count++){
        sum+=count;
    }

    cout<<"The sum is "<<sum;
}