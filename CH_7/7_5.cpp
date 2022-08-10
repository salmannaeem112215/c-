#include<iostream>
using namespace std;

double inputFood(int);

int main(){
    const int mSize=3;   // no of monkeys
    const int dSize=5;   // no of Days 

    double max=-999999,min=999999,sum=0,value=0,average=0;
    double arr[mSize][dSize]={0};

    for(int i=0; i<mSize ; i++ ){
        cout<<"Enter Details for Monkey "<<i+1<<" :- "<<endl;
        for(int j=0; j<dSize ; j++){
            value=inputFood(j+1); // Storing Value entered by user after validation
            arr[i][j]=value;        // Storing Value on array 
            
            sum+=value;             // summing value for average
            if(max<value){          // finding maximum value 
                max=value;
            }
            if(min>value){          //finding minimum value
                min=value;
            }
        }
        cout<<endl;
    }

    average=sum/double(mSize*dSize);
    cout<<endl;
    cout<<"Average  amount of Food : "<<average<<endl;
    cout<<"Lowest   amount of Food : "<<min<<endl;
    cout<<"Greatest amount of Food : "<<max<<endl;

}

// Input Validator Module
double inputFood(int day){
    double temp=0;
    do{
    cout<<"Day "<<day<<": Food eating in Pounds :";
    cin>>temp;
    }while(temp<0);
    return temp;
}