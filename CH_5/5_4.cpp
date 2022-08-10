#include<iostream>
using namespace std;

int main(){
    const double cbpm = 3.6; // calories burn  per minute

    for(int count = 5 ; count <=30 ; count+=5){
        cout<<"Calories burn in "<<count
            <<" minutes "<<cbpm*count<<endl;
    }

}