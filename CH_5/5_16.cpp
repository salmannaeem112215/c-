#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    bool flag=true;
    int no_of_month=0;
    double starting_blanace;
    double balance;
    double monthlyIntrest=0;
    double annual_intrest_rate;
    double total_intrest=0;
    double deposit;
    double total_deposit=0;
    double withdrawl;
    double total_withdrawls=0;
    
    cout<<"Enter Annual Intrest Rate ";
    cin>>annual_intrest_rate;
    cout<<"Enter Statring Balance ";
    cin>>starting_blanace;
    cout<<"Enter No of Months spend ";
    cin>>no_of_month;

    balance=starting_blanace;

    for(int i =0; i< no_of_month ; i++){
        cout<<"Please Enter Details for Month "<<i+1<<endl;
        
        // Asking ammount of Deposit and adding from balance
        cout<<"Enter Amount of Deposit : ";
        cin>>deposit;
        if(deposit<0){
            flag=false;
            break;
        }
        balance+=deposit;
        total_deposit+=deposit;

        // Asking ammount of withdrwal and  subtracting from balance
        cout<<"Enter Amount of Withdrawl : ";
        cin>>withdrawl;
        if(deposit<0){
            flag=false;
            break;
        }
        balance-=withdrawl;
        total_withdrawls+=withdrawl;

        // Calulating monthly intrest and adding in balance
        monthlyIntrest=balance*annual_intrest_rate/12;
        balance += monthlyIntrest;
        total_intrest+=monthlyIntrest;

        cout<<endl;
    }

    if(flag){
    // cout<<setprecision(2)<<fixed<<endl;
    cout<<"+=============================================="                       <<"+"<<endl;
    cout<<"| Your Balance is             : "<<setw(15)<<left<<balance             <<"|"<<endl;
    cout<<"| Total Amount of Deposit     : "<<setw(15)<<left<<total_deposit       <<"|"<<endl;
    cout<<"| Total Amount of Withdrawals : "<<setw(15)<<left<<total_withdrawls    <<"|"<<endl;
    cout<<"| Total Intrest Earned        : "<<setw(15)<<left<<total_intrest       <<"|"<<endl;
    cout<<"+=============================================="                       <<"+"<<endl;
    }
    else{
        cout<<"Account has Closed due to negative entry"<<endl;
    }
}