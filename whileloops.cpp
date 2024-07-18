#include <iostream>

int main() {
    using namespace std;
    string name;
    //infinite loop
    while(1==0){
        // at 1==1 infinite loop
        cout << "dormammu i've come to bargain" << endl;
    }

    while(name.empty()) {
        cout << "Please enter your name: ";
        getline(cin, name);
    }
    // untill the condition is met the while loop will return false infinitly
// great tool to get users to do something 
    cout << "Hello, " << name << "! Welcome to the C++ programming language!" << endl;



    return 0;
}