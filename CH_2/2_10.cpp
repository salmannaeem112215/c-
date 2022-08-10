#include <iostream>
using namespace std;

int main(){
    int gasCapacity=15;
    int milesBeforeRefueling=375;

    float MPG=milesBeforeRefueling/gasCapacity;

    cout<<endl<<endl<<"The Number of miles per gallon the car gets is : "<<MPG<<endl<<endl<<endl;
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     const float MILES_TRAVELED = 375,
//                 TOTAL_GAL_OF_GAS = 15;
                
//     float MPG = MILES_TRAVELED / TOTAL_GAL_OF_GAS;

//     cout << endl;
//     cout << "A car that holds 15 gallons of gas and that \n";
//     cout << "can travel 375 miles before refuling will \n";
//     cout << "use " << MPG << " Miles Per Gallon.\n";
//     cout << endl;

//     return 0;
// }