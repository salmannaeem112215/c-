#include<iostream>
using namespace std;

int main(){


    int no_of_years=0;
    int months_per_year=12;
    double inches;
    double total_inches=0.0;
    double average_inches=0.0;
    int total_months;

    do{
    cout<<"No of years must be greater or equal to 1 "<<endl;
    cout<<"Enter Number of Years ";
    cin>>no_of_years;
    }while(no_of_years<1);


    for(int i = 0 ; i<no_of_years ; i++){
        for(int j=0 ; j<months_per_year ; j++){
            do{
            cout<<"Inches must not be negative "<<endl;
            cout<<"Enter Inches for Month "<<j+1<<" : ";
            cin>>inches;
            }while(inches<0);
            total_inches+=inches;
        }
    }
    
    total_months= no_of_years * months_per_year;
    average_inches=total_inches/total_months;

    cout<<"Total Months "<<total_months<<endl;
    cout<<"Total Inches of rainfall "<<total_inches<<endl;
    cout<<"Average Inches per Month "<<average_inches<<endl;

}