// Name: Talha Basheer
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0751
// Section: A
#include <iostream>
using namespace std;

// Function to calculate sum
int calculateSum(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " integers:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = calculateSum(arr, n);

    double average = (double)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
