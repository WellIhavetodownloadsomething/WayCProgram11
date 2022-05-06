//Way, Cameron
// CSC119-144 Introduction to Programming C++ Spring 2022
//Date :

// Program 4 to display astronomy helper.

#include <iostream>
using namespace std;

void displayMenu();
int main()
{
    displayMenu();
}


void displayMenu()
{
        // Declaring menu select and planet strings.
int menuSelection;
string Mercury, Venus, Earth, Mars;

    do

    {
        cout << "1. Mercury\n2. Venus\n3. Earth\n4. Mars\n5. EXIT the program";
        cout << "Enter your selection: \n";
        cin >> menuSelection;
        cout << endl;

       //Validate the menu selection
    while (menuSelection < 1 || menuSelection > 5)

    {
        cout << "This is an invalid selection.";
        cout << "Enter a selection from 1-5: ";
        cin >> menuSelection;
    }
    switch (menuSelection)
    {

    // case 1, Mercury
    case 1:

    cout << "MERCURY\n";


    cout <<
       "Average Distance from the sun: 57.9 million kilomenters\n";

    cout << "Mass: 3.31 x 10^23 kg\n";

    cout << "Surface Temperature: -173 to 430 degrees Celsius\n";


    break;

    // case 2, Venus
    case 2:
        cout << "VENUS\n";
        cout <<
        "Average Distance from the sun: 108.2 million kilometerscout\n";
        cout << "Mass: 4.87 x 10^24 kg\n";
        cout << "Surface Temperature: 472 degrees Celsius\n";
    break;
    // case 3, Earth!
    case 3:
        cout << "EARTH\n";
        cout << "Average Distance from the sun: 149.6 million kilometers\n";
        cout << "Mass: 5.967 x 10^24 kg\n";
        cout << "Surface Temperature: -50 to 50 degrees Celsius\n";
    break;
// case 4, Mars.

    case 4:

        cout << "MARS\n";
        cout << "Average Distance from the sun: 227.9 million kiometers\n";
        cout << "Mass: 0.6424 x 10^24 kg\n";
        cout << "Surface Temperature: -140 to 20 degrees Celsius\n";
    break;
}

}
    while (menuSelection != 5);

}
