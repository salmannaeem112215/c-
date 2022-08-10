#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int test_score,sum=0;
double avg;
for(int i=0;i<5;i++){
    cin>>test_score;
    sum=sum+test_score;
}
avg=(sum/5.0);
cout<<"average of five test scores is  "<<setprecision(1)<<fixed<<avg;
return 0;
}