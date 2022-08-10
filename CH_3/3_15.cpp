#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // Constant Variables
    const float ASSESSMENT_value = 0.60,
       const float PROPERTY_TAX = 0.75,
       const float HUNDRED = 100;
    // Variables
    float total_assessment_value, actual_value, total_property_tax;
   // Ask user for actual value of property
    cout << "What is that actual value of a property?";
    cin >> actual_value;
    //calculating the total assessment value and total property tax
    total_assessment_value = actual_value * ASSESSMENT_value;
    total_property_tax = (total_assessment_value / HUNDRED) * PROPERTY_TAX;
    // Display assessment value and property tax.
    cout << "Property Value:    $";
    cout << actual_value << endl;
    cout << "Assessment value:  $";
    cout  << total_assessment_value << endl;
    cout << "Property Tax:      $";
    cout  << total_property_tax << endl;
    cout << endl;
    return 0;
}