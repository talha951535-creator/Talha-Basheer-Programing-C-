// Name: Talha Basheer
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0751
// Section: A

#include <iostream>
using namespace std;

int main() {
    char message[] = "HELLO";  // ap apna word change kar sakte ho

    cout << "Characters in message:" << endl;
    for(int i = 0; message[i] != '\0'; i++) {
        cout << message[i] << endl;
    }

    return 0;
}
