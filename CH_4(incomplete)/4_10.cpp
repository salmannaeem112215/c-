#include<iostream>
using namespace std;
int main(){
    int month;
    int year;
    int days;

    cout<<"Enter month (1-12) ";
    cin>>month;
    cout<<"Enter Year ";
    cin>>year;

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days=31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days=30;
        break;
    case 2:
        if( year % 100 == 0 && year % 400 == 0)
        {
            days=29;
        }
        else if(year%100!=0 && year%4==0 ){
            days=29;
        }
        else{
            days=28;
        }
        break;   
    default:
        break;
    }

    cout<<days<<" days "<<endl;

}