#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    string month_1,month_2,month_3;
    double rate_1,rate_2,rate_3;
    double avg=0.0;
    rate_1=rate_2=rate_3=0.0;

    cout<<"ENter name of Month 1 : ";
    cin>>month_1;
    cout<<"Enter Rain fell ''in inches'' for  "<<month_1<<" : ";
    cin>>rate_1;
    cout<<"ENter name of Month 2 : ";
    cin>>month_2;
    cout<<"Enter Rain fell ''in inches'' for  "<<month_2<<" : ";
    cin>>rate_2;
    cout<<"ENter name of Month 3 : ";
    cin>>month_3;
    cout<<"Enter Rain fell ''in inches'' for  "<<month_3<<" : ";
    cin>>rate_3;
    
    avg=(rate_1+rate_2+rate_3)/3;
    cout<<fixed<<showpoint<<setprecision(2);

    cout<<"Average rainfall for "<<month_1<<","<<month_2<<",and "<<month_3<<" is "<<avg<<" inches";
    return 0;
}