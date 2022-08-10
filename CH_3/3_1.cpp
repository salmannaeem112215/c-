#include<iostream>
using namespace std;

int main(){
    double gallons,miles,result;

    cout<<"Enter Number of Gallons => ";
    cin>>gallons;

    cout<<"Enter Number of Miles on full tank => ";
    cin>>miles;

    result=miles/gallons;

    cout<<"Number of Miles per gallons => "<<result;
}