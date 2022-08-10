#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // variables
    const double PI = 3.14159;
    double radius = 0.0,
           length = 0.0,
           width = 0.0,
           base = 0.0,
           height = 0.0,
           area = 0.0;
    int choice = 0;
    // input data from user

    cout << "\t Geometry Calculator" << endl;
    cout << "\t\t 1- Calculate the Area of a Circle" << endl;
    cout << "\t\t 2- Calculate the Area of a Rctangle" << endl;
    cout << "\t\t 3- Calculate the Area of a Triangle" << endl;
    cout << "\t\t 4- Quit" << endl;
    cout << "\t\t Enter your choice (1-4)" << endl;
    cin >> choice;
    while (choice < 1 || choice > 4)
    { // input validation

        cout << "Error! please Enter choice from 1 to 4";
        cin >> choice;
    }
    if (choice == 1)
    { // calculate area of Circle
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        while (radius < 0)
        { // input validation
            cout << "Please enter a positive value: ";
            cin >> radius;
        }

        // calculate area
        area = PI * (pow(radius, 2));

        cout << "The area of circle is: " << area << endl;
    }
    else if (choice == 2)
    { // calculate area of Rectangle
        cout << "Enter the height of the rectangle: ";
        cin >> length;
        while (length < 0)
        { // input validation
            cout << "Please enter a positive value: ";
            cin >> length;
        }
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        while (width < 0)
        { // input validation
            cout << "Please enter a positive value: ";
            cin >> width;
        }

        // calculate area
        area = length * width;
        cout << "The area of rectangle is: " << area << endl;
    }
    else if (choice == 3)
    { // calculate area of triangle
        cout << "Enter the base of the triangle: ";
        cin >> base;
        while (base < 0)
        { // input validation
            cout << "Please enter a positive value: ";
            cin >> base;
        }
        cout << "Enter the height of the triangle: ";
        cin >> height;
        while (height < 0)
        { // input validation
            cout << "Please enter a positive value: ";
            cin >> height;
        }

        // calculate area
        area = base * height * 0.5;
        cout << "The area of triangle is: " << area << endl;
    }
    else if (choice == 4)
    { // Quit
        exit(0);
    }

    return 0;
}
