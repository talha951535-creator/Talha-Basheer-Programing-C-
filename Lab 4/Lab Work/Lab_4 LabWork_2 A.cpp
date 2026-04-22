// Name: Talha Basheer 
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0751
// Section: A

#include <iostream>
using namespace std;

int main() {
    char grade; // Variable for grade input

    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;

    // Evaluate grade (handles both upper and lower case)
    switch(grade) {
        case 'A':
        case 'a':
            cout << "Excellent";
            break;

        case 'B':
        case 'b':
            cout << "Very Good";
            break;

        case 'C':
        case 'c':
            cout << "Good";
            break;

        case 'D':
        case 'd':
            cout << "Pass";
            break;

        case 'F':
        case 'f':
            cout << "Fail";
            break;

        default:
            // For any other character input
            cout << "Invalid Grade";
    }

    return 0; // End program
}

