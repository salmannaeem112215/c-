#include<iostream>
using namespace std;
//Main function The Entry point of program
int main()
{
    const float TAX=(6.75/100);  //Given
    const float TIP=(20.0/100.0);  //Given
    float meal_Charge=88.67;    //Given
    float total=(meal_Charge*TAX)+(meal_Charge*TIP)+meal_Charge;
   
    cout<<"Meal Cost is : " <<meal_Charge<<"$\n"; 
    cout<<"Tax amount is : " <<(meal_Charge*TAX)<<"$\n";
    cout<<"Tip Amount is  : "<<(meal_Charge*TIP)<<"$\n";
    cout<<"Total Bill is   : "<<total<<"$\n";

    return 0;
}