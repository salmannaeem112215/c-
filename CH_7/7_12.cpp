#include <iostream>
#include <string>

using namespace std;
const int N_students = 5;
const int N_TESTS = 4;
char getGrade(double *);
int main()
{
    // A Teacher has 5 students who have 4 tests
    string names[N_students];
    char grades[N_students];
    double stdMarks[N_TESTS];
    for (int i = 0; i < N_students; i++)
    {
        cout << "Enter the name of student " << i + 1 << ": ";
        getline(cin, *(names + i));
        for (int j = 0; j < N_TESTS; j++)
        {
            cout << "Enter the marks of std " << i + 1 << " test no " << j + 1 << ": ";
            while (!(cin >> *(stdMarks + j)) || *(stdMarks + j) > 100 || *(stdMarks + j) < 0)
            {
                cout << "Error Enter VALID value: ";
                cin.clear();
            }
        }
        *(grades + i) = getGrade(stdMarks);
        // cout<<"The Grade of sudent "<<i+1<<" is: "<<*(grades+i)<<endl;
        cin.clear();
        cin.ignore(1200, '\n');
    }
    for (int i = 0; i < N_students; i++)
        cout << "The grade of " << *(names + i) << " is: " << *(grades + i) << endl;
    char c;cin>>c;
    return 0;
}
char getGrade(double *marks)
{
    double total,
        avg;
    char grade;
    for (int i = 0; i < N_TESTS; i++)
        total += *(marks + i);

    avg = total / N_TESTS;
    if (avg >= 90)
        grade = 'A';
    else if (avg >= 80)
        grade = 'B';
    else if (avg >= 70)
        grade = 'C';
    else if (avg >= 60)
        grade = 'D';
    else if (avg > 0 && avg < 60)
        grade = 'F';
    else
        cout << "Error in logic";
    return grade;
}