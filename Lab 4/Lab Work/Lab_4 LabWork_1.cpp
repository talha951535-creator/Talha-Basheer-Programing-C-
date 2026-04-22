// Name: Talha Basheer 
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0751
// Section: A

#include <iostream> 
using namespace std; 

int main()
{
    int day; // Stores user input

    // Prompt and get input
    cout << "Enter day number (1-7): ";
    cin >> day;

    // Check input against days of the week
    switch(day)
    {
        case 1:
            cout << "Monday";
            break; // Stop execution of switch

        case 2:
            cout << "Tuesday";
            break;

        case 3:
            cout << "Wednesday";
            break;

        case 4:
            cout << "Thursday";
            break;

        case 5:
            cout << "Friday";
            break;

        case 6:
            cout << "Saturday";
            break;

        case 7:
            cout << "Sunday";
            break;

        default:
            // Handle numbers outside 1-7
            cout << "Invalid input! Please enter a number between 1 and 7.";
    }

    return 0; // Success
}
