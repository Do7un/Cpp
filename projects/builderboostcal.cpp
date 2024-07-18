#include <iostream>
#include <string>

int main(){
    using namespace std;

    string name;
    string building; 
    double time;

    cout << "Good Day, what is your name? " << endl;
    getline(cin, name);
    cout << name << ", what building are you upgrading? " << endl;
    getline(cin, building);
    cout << "How many days will the upgrade take? " << endl;
    cin >> time;
    
    cout << "The duration of the upgrade is " << time * 24 << " hours." << endl;
    double boosted_time = (time * 24) - 9.6; // Since the potion works for one hour at 10x speed
    cout << "Dear " << name << ", the upgrade of the " << building << " will now take " << boosted_time << " hours, on application of the builder potion. Thank you." << endl;

    return 0;
}


/*
Here are the key changes and improvements:

Removed unnecessary casting: Casting (double)time to double is redundant since time is already a double.

Simplified getline usage: Removed >> ws from getline(cin >> ws, name); and getline(cin >> ws, building); as it is unnecessary and can cause issues. getline(cin, name); and getline(cin, building); are sufficient.

Corrected the calculation: Adjusted the logic to account for the one-hour boost correctly, considering that one hour at 10x speed completes 
10
24
24
10
​
  of the job, which is 0.4 days' worth of work in one hour, leaving 9.6 hours of normal work to be subtracted from the total.

Added clarity: Improved prompt messages and added punctuation for better readability.


 */