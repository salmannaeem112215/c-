#include <iostream>
using namespace std;

int main()
{
    int predictedPopulation,
        startingPopulation,
        noOfDays;
    double dailyIncreasePercentage;
    do
    {
        cout << "Enter the population start size: ";
        cin >> startingPopulation;
        if (startingPopulation < 2)
        {
            cout << "Please enter a number greater than 2." << endl;
        }
    } while (startingPopulation < 2);

    do
    {
        cout << "Enter the percentage of increase in a day: ";
        cin >> dailyIncreasePercentage;
        if (dailyIncreasePercentage < 0)
        {
            cout << "Please enter a positive value." << endl;
        }
    } while (dailyIncreasePercentage < 0);

    do
    {
        cout << "Enter the no of days: ";
        cin >> noOfDays;
        if (noOfDays < 1)
        {
            cout << "Please a no greater than 1." << endl;
        }
    } while (noOfDays < 1);

    for (int i = 1; i <= noOfDays; i++)
    {
        predictedPopulation = startingPopulation + (startingPopulation * dailyIncreasePercentage / 100);

        cout << "Population after " << i << " "
             << " day will be " << predictedPopulation << endl;

        startingPopulation = predictedPopulation; // for next days population will be predicted on
        // the result of previous day
    }

    return 0;
}