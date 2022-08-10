#include<iostream>
using namespace std;

int main(){
    double  budget,
            expense,
            total_expense=0;
    int count=0;

    cout<<"Enter your Budget amount ";
    cin>>budget;

    cout<<"Press -1 to stop entring";
    while(true){
        cout<<"Enter Expense "<<++count<<" : ";
        cin>>expense;
        if(expense==-1){
            break;
        }
        total_expense+=expense;
    }

    cout<<"Your Budget "<<budget<<endl;
    cout<<"Total Expense "<<total_expense<<endl;
    cout<<"You are "<<(budget>total_expense?"under ":"over ")<<"budget"<<endl;



}