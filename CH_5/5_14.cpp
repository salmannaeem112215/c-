#include <iostream>
using namespace std;

int main()
{
    int noOfStudents;

    do
    {
        cout << "Enter the no of students: ";
        cin >> noOfStudents;
        if (noOfStudents < 1 || noOfStudents > 25)
        {
            cout << "Please a no greater than 1 and less than 25." << endl;
        }
    } while (noOfStudents < 1 || noOfStudents > 25);

    string *names = new string[noOfStudents];

    for (int i = 0; i < noOfStudents; i++)
    {
        cout << "Enter name of " << i + 1 << " student: ";
        cin >> names[i];
        for (int j = 0; j < i; j++)
        { // to check if the name is not present
            if (names[i] == names[j])
            {
                cout << "Please Enter another name." << endl;
                --i; // continue will take the input on next index
                // --i will cause the input to be on same index
                continue;
            }
        }
    }

    string first, last;

    first = names[0];
    last = names[0];

    for (int i = 1; i < noOfStudents; i++)
    {
        if (names[i] < first)
        {
            first = names[i];
        }
        if (names[i] > last)
        {
            last = names[i];
        }
    }

    cout << first << " will be at the front and "
         << last << " will be at the end" << endl;

    return 0;
}