#include<iostream> 
#include<iomanip> 
#include<cmath>
using namespace std;
int main()
{
double x;
cout<<"Enter the angle in radians"<<endl;
cin>>x;
cout<<"The sin of the angle is "<<setprecision(4)<<fixed<<sin(x)<<endl;;
cout<<"The cosine of the angle is "<<setprecision(4)<<fixed<<cos(x)<<endl;
cout<<"The tangent of the angle is "<<setprecision(4)<<fixed<<tan(x)<<endl;
return 0;
}