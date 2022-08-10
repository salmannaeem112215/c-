#include<iostream>
using namespace std;

int main(){
    const double penny=0.01; // in dollars
    const double rate=2;

    int no_of_days=0;
    double salary=penny;
    double total_salary=0;

    cout<<"Enter Number of Days "<<endl;
    cin>>no_of_days;

    for(int i = 1 ; i<=no_of_days ; i++){
        salary*=rate;
        cout<<" Day "<<i<<" Salary = "<<salary<<" $"<<endl;
        total_salary+=salary;
    }
    cout<<"Total Payment in "<<no_of_days<<" Days are "<<total_salary<<" $"<<endl;

}