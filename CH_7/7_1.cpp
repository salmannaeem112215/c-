#include<iostream>
using namespace std;

int main(){
    const int SIZE=10;
    int arr[SIZE]={0}; // initialized every element with 0
    int max=-9999,min=9999; 
    for(int i=0; i<SIZE;i++){
        cout<<"Enter Value at arr["<<i<<"] :";
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"\n\n";
    cout<<"Largest  Value is :"<<max<<endl;
    cout<<"Smallest Value is :"<<min<<endl;
}