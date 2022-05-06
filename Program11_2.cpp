//Way, Cameron
// CSC119-144 Introduction to Programming C++ Spring 2022
//Date :

// Program to display student meal plans.


#include <iostream>
using namespace std;

#include <iostream>
using namespace std;
void displayMenu();
int lunchMoney(int i, int j)
{
    int tmp = j;
    int planCost;
    if(i == 1)
    {
        planCost = tmp * 560;
    }
    if(i == 2)
    {
        planCost = tmp * 1095;
    }
    if(i == 3)
    {
        planCost = tmp * 1500;
    }
    return planCost;
}
//main
int main()
{
   displayMenu();
     return 0;
}

void displayMenu(){
 int selectNum, semesters;
    //loop menu until 'sentinel' is entered
    do
    {
        cout << "Select a meal plan and follow the prompt to calculate your FRCC meals costs:\n";
        cout << "Plan 1: 7 meals per week for $560 per semester\n"
                "Plan 2: 14 meals per week for $1,095 per semester\n"
                "Plan 3: Unlimited meals for $1500 per semester\n"
                "4. End the Program\n";
        cout << "Please enter a number from the menu,(1-4): ";
        cin >> selectNum;
        switch(selectNum)
        {
            case 1:
                cout << "Please enter how many semesters to calculate: ";
                cin >> semesters;
                cout << lunchMoney(1, semesters) << " dollars. Not bad! You might be hungry though...\n" << endl;
                break;
            case 2:
                cout << "Please enter how many semesters to calculate: ";
                cin >> semesters;
                cout << lunchMoney(2, semesters) << " dollars. Only two meals! Make sure to drink you milk I guess!\n" << endl;
                break;
            case 3:
                cout << "Please enter how many semesters to calculate: ";
                cin >> semesters;
                cout << lunchMoney(3, semesters) << " dollars. Expensive! But your brain and body will thank you!\n" << endl;
                break;
            case 4:
                cout << "Thank you for using the 'FRCC Food Calculator.' Good luck in school!\n";
                break;
            //validate
            default:
                cout << "Please select a menu number; i.e. 1-4.\n";
        }
    }while(selectNum != 4);
}
