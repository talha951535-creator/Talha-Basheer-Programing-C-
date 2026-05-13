// Name: Talha Basheer
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0751
// Section: A

#include <iostream>
using namespace std;

int main() {
    int source[5] = {1, 2, 3, 4, 5};
    int destination[5];

    // Copying array
    for(int i = 0; i < 5; i++) {
        destination[i] = source[i];
    }

    cout << "Source Array:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << source[i] << " ";
    }

    cout << endl;

    cout << "Destination Array:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << destination[i] << " ";
    }

    return 0;
}
