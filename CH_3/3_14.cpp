#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float S,    // product sales
          T,    // total income (product sales + sales tax)
          total_state_tax,
          total_county_tax,
          total_sales_tax;

    string month;

    int year;

    // Ask user for month, year, and total collected (sales plus sales tax)
    cout << endl;
    cout << "Enter the month to receive the report for: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Total amount collected for the month of " << month << ": ";
    cin >> T;

    // Calculate Sales, County Sales Tax, State Sales Tax, and Total Sales Tax
    S = T / 1.06;
    total_state_tax = S * 0.04;
    total_county_tax = S * 0.02;
    total_sales_tax  = S * 0.06;

    // Display Calculations
    cout << setprecision(2) << fixed << right << endl;
    cout << "---------------------------------" << endl;
    cout << "Month: " << month << endl;
    cout << "---------------------------------" << endl;
    cout << "Total Collected:    $" << setw(10) << T << endl;
    cout << "Sales:              $" << setw(10) << S << endl;
    cout << "County Sales Tax:   $" << setw(10) << total_county_tax << endl;
    cout << "State Sales Tax:    $" << setw(10) << total_state_tax << endl;
    cout << "Total Tales Tax:    $" << setw(10) << total_sales_tax << endl;
    cout << "---------------------------------" << endl;
    cout << endl;

    // Terminate Program
    return 0;
}