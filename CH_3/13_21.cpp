#include<iostream>
#include<math.h>
using namespace std;

int main(){
    //Data types
    double  diameter,
            radius,
            area;
    int     total_slices,
            total_persons;

    const int slice_per_person =4;
    const double PI=3.14159;
    const double area_of_slice=14.125;

    cout<<"Enter Total Persons u are => ";
    cin>>total_persons;

    total_slices=total_persons*slice_per_person;
    area=area_of_slice*total_slices;
    radius= sqrt(area/PI);
    diameter = radius*2;

    cout<<"As you are "<<total_persons<<" Persons,\n"
        <<"So you must have to order "<<diameter<<" inches diameter Pizza \n"
        <<"In order to eat "<<slice_per_person<<" Slice of pizza per perosn \n";

}