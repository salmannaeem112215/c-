#include<iostream>
using namespace std;

int main(){
    int side;
    const char character='X';
    do{
    cout<<"Enter Size of Square (must be positive ) : ";
    cin>>side;
    }while(side<0);

   for(int i=0; i<side;i++){
    for(int j=0;j<side;j++){
        cout<<character;
    }
    cout<<endl;
   }
   
}