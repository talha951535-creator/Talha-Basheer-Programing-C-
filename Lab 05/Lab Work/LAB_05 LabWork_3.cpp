// Name: Talha Basheer 
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0751
// Section: A

#include <iostream>
using namespace std;

int main()
{
    int num, i = 1, sum = 0; // Initialize variables and sum accumulator

    cout << "Enter a positive integer: ";
    cin >> num; // Get limit from user

    // Loop until i reaches the entered number
    while(i <= num)
    {
        sum = sum + i; // Add current value to sum
        i++; // Move to next number
    }

    cout << "Sum = " << sum << endl; // Display final total

    return 0; // Success
}

