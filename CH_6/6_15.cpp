#include <iostream>
using namespace std;

double calculateCharges(int, double, double, double);
double calculateCharges(double, double);

int main()
{
    int choice = 0;

    cout << "The Patient was Admitted as: " << endl;
    cout << "1. in-patient			2. out - patient" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        int noOfDays;
        double dailyRate, medCharges,
            serviceCharges, totalCharges;
        do
        {
            cout << "Enter the noOfdays: ";
            cin >> noOfDays;
            if (noOfDays < 0)
            {
                cout << "Invalid Input." << endl;
            }
        } while (noOfDays < 0);

        do
        {
            cout << "Enter the daily rate: ";
            cin >> dailyRate;
            if (dailyRate < 0)
            {
                cout << "Invalid Input." << endl;
            }
        } while (dailyRate < 0);

        do
        {
            cout << "Enter the medication charges: ";
            cin >> medCharges;
            if (medCharges < 0)
            {
                cout << "Invalid Input." << endl;
            }
        } while (medCharges < 0);

        do
        {
            cout << "Enter the hospital service charges: ";
            cin >> serviceCharges;
            if (serviceCharges < 0)
            {
                cout << "Invalid Input." << endl;
            }
        } while (serviceCharges < 0);

        totalCharges = calculateCharges(noOfDays, dailyRate, medCharges, serviceCharges);
        cout << "The total charges are: " << totalCharges << endl;
    }
    else if (choice == 2)
    {
        double medCharges,
            serviceCharges, totalCharges;
        do
        {
            cout << "Enter the medication charges: ";
            cin >> medCharges;
            if (medCharges < 0)
            {
                cout << "Invalid Input." << endl;
            }
        } while (medCharges < 0);

        do
        {
            cout << "Enter the hospitalService charges: ";
            cin >> serviceCharges;
            if (serviceCharges < 0)
            {
                cout << "Invalid Input." << endl;
            }
        } while (serviceCharges < 0);

        totalCharges = calculateCharges(medCharges, serviceCharges);
        cout << "The total charges are: " << totalCharges << endl;
    }
    else
    {
        cout << "Invalid Choice. Re-run the program. " << endl;
    }

    return 0;
}

double calculateCharges(int noOfDays, double dailyRate, double medCharges, double serviceCharges)
{
    double total = 0;

    total += (noOfDays * dailyRate);
    total += medCharges;
    total += serviceCharges;

    return total;
}

double calculateCharges(double serviceCharges, double medCharges)
{
    return serviceCharges + medCharges;
}
