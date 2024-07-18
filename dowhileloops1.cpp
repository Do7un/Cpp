#include <iostream>

int main() {
    using namespace std;

    int number;

    do {
        cout << "Enter a positive integer (0 to quit): ";
        cin >> number;

        if (number == 0) {
            cout << "Quitting the program." << endl;
            break;
        } else if (number < 0) {
            cout << "Please enter a positive integer." << endl;
        }

    } while (number < 0 );//|| number != 0);

    if (number > 0) {
        cout << "The number is: " << number << endl;
    }

    return 0;
}

// 0.x isnt an integer but using the double function instead works for decimal