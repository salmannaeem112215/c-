#include<iostream>
#include<string>
using namespace std;
// 4,8,12,16,17,20,24
int getNumAccidents(string);
void findLowest(int,int,int,int,int);
int main(){
    int N,
        S,
        E,
        W,
        C;
    N=getNumAccidents("north");
    S=getNumAccidents("south");
    E=getNumAccidents("east");
    W=getNumAccidents("west");
    C=getNumAccidents("central");
    findLowest(N,S,E,W,C);
    return 0;
}
int getNumAccidents(string s){
    cout<<"Enter the no. of accidents reported in "<<s<<" region in the last year: ";
    int Num;
    while(!(cin>>Num)|| Num < 0){
        cout<<"Error Enter Valid number of accidents: ";
    }
    return Num;
}
void findLowest(int a,int b,int c,int d,int e){
    if(a<b&&a<c&&a<d&&a<e)
        cout<<"North Region has lowest accidents which are: "<<a<<endl;
    else if(b<a&&b<c&&b<d&&b<e)
        cout<<"South Region has lowest accidents which are: "<<b<<endl;
    else if(c<b&&c<a&&c<d&&c<e)
        cout<<"East Region has lowest accidents which are: "<<c<<endl;
    else if(d<b&&d<c&&d<a&&d<e)
        cout<<"West Region has lowest accidents which are: "<<d<<endl;
    else if(e<b&&e<c&&e<d&&e<a)
        cout<<"Central Region has lowest accidents which are: "<<e<<endl;
    else 
        cout<<"Some Numbers have same number of accidents";
}