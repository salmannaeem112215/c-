#include<iostream>
using namespace std;

int inputHour();
double inputPayRate();

int main(){

    const int SIZE=7;
    long int    empId[SIZE]={5658845,4520125,7895122,8777541,8451277,1302850,7580489};
    int         hours[SIZE]={0};
    double      payRate[SIZE]={0};
    double      wages[SIZE]={0};

    for(int i=0;i<SIZE;i++)
    {
        cout<<"Id : "<<empId[i]<<endl;
        hours[i]=inputHour();
        payRate[i]=inputPayRate();
        wages[i]=hours[i]*payRate[i];
        cout<<endl;
    }
    cout<<endl;

    cout<<"----------------|-------------------"<<endl;
    cout<<"EmpId  \t\t|\tGrossWages\n";
    cout<<"----------------|-------------------"<<endl;
    for(int i =0 ;i<SIZE;i++){
        cout<<empId[i]<<"\t\t|\t$"<<wages[i]<<endl;
    }
    cout<<"----------------|-------------------"<<endl;



}


int inputHour(){
    int temp=0;
    cout<<"Enter Hours : ";
    cin>>temp;
    while (temp<0)
    {
    cout<<"Note:\tHours Can't be Negative "<<endl;
    cout<<"Enter Hours : ";

    cin>>temp;
    }
    return temp;
}
double inputPayRate(){
    double temp=0;
    cout<<"Enter pay Rate : ";
    cin>>temp;
    while (temp<15)
    {
    cout<<"Note:\tPayRate cannot be less than 15 "<<endl;
    cout<<"Enter pay Rate : ";
    cin>>temp;
    }
    return temp;
}