#include <iostream>
#include <math.h>
using namespace std;

int askEmployes();
int totalDays(int);
double averageAbsent(int, int);

int main()
{
    int no_of_employes = askEmployes();
    int total_absent_days = totalDays(no_of_employes);

    cout << "Average Absent days of Employees in Past year " << averageAbsent(no_of_employes, total_absent_days);
}

int askEmployes()
{
    int num;
    do
    {
        cout << "Enter Total Employees :";
        cin >> num;
    } while (num < 0);
    return num;
}

int totalDays(int num)
{
    int total_days = 0;
    int day;

    for (int i = 0; i < num; i++)
    {
        do
        {
            cout << i + 1 << ": Employe Absent Day ";
            cin >> day;
        } while (day < 0);
        total_days += day;
    }
    return total_days;
}

double averageAbsent(int e, int d)
{
    return static_cast<double>(d) / e;
}