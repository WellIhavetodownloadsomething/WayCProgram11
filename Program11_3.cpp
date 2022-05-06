//Way, Cameron
// CSC119-144 Introduction to Programming C++ Spring 2022
//Date :

// Program 3 to display circle, square, rectangle equations.

#include <iostream>
#include <fstream>
using namespace std;

void calcCircle();
void calcSquare();
void displayMenu();

int main()
{
    displayMenu();
    return 0;
}
//Function for circle, square, and triangle.

void displayMenu()
{
int rectangleArea, area, base, width, length, height, radius;
float circleArea, triangleArea;
const double PI = 3.14;

// Ask user for input.
    cout <<"Enter 1 for the radius of the circle. "<<endl;
    cout <<"Enter 2 for the length of the triangle. "<<endl;
    cout <<"Enter 3 for the width of the rectangle. "<<endl;
    cout <<"Enter 4 to end the program. "<<endl;

    while (1==1)
    {
        cout<< "Enter a number.";
        cin >> area;

        switch(area)
        {
        case 1:
            cout << "Enter the radius of the circle\n";
            cin >> radius;
            cout<< "Enter the area of the circle.\n";
            circleArea=  PI * (radius*2);
            cout<<"The area of the circle is " << circleArea <<endl;
        break;

        case 2:
            cout <<"Enter the length of the rectangle\n";
            cin >> length;
            cout <<"Enter the width of the rectangle\n";
            cin >> width;
            rectangleArea = length * width;
            cout <<"Rectangle area is "<< rectangleArea <<endl;
        break;

        case 3:
            cout<<"Enter the length of the triangle base.\n";
            cin >> base;
            cout<<"Enter the height of the triangle.\n";
            cin >> height;
            triangleArea = (base*height);
            cout<< "Triangle area is " << triangleArea << endl;
        break;

        case 4:
            cout << "Ending program." << endl;
        }
    }
}

