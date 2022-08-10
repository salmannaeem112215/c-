// This program will display all the numbers greater than the entered number
#include<iostream>
using namespace std;

// Function Prototype
void ReturnGreater(int*, int, int);
int* fillArr(int);
int main() {
    int size,
        num,
        * arr;
    cout << "Enter the size of the array: ";
    cin >> size;
    arr = fillArr(size);
    cout << "Enter the number you want to check for: ";
    cin >> num;
    cout<<endl<<"The Numbers greater than "<<num<<" are: ";
    ReturnGreater(arr, size, num);
    return 0;
}
void ReturnGreater(int* arr, int size, int num) {
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > num)
        {
            if(i == size - 1)
                cout << *(arr + i);
            else
                cout << *(arr + i) << ", ";
            
        }
    }
}
int* fillArr(int size) {
    int* arr=new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value in (" << i << ") element: ";
        cin >> *(arr + i);
        cout << endl;
    }
    return arr;
}