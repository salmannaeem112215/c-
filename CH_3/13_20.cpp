#include<iostream>
using namespace std;

int main(){
    //Data types
    double  diameter,
            radius,
            area,
            PI=3.14159;
    int     no_of_slices;
    
    //Asking diameter for pizza
    cout<<"Enter diameter of pizza in Inches => ";
    cin>>diameter;

    //calulating no_of_slices
    radius=diameter/2;
    area= radius*radius*PI;
    no_of_slices=area/14.125;

    cout<<" Your Pizza can have "<<no_of_slices<<" Slices "<<endl;

}