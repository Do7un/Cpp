#include <iostream>
// string classes
int main () {
    using namespace std;
    string name;

    cout << " Enter a name" << endl;
    getline(cin, name);
    //name.insert(0,  "@");
    //name.erase(0, 3); removes string data
    name.append("@gmail.com");
    cout << "The white space is at index " <<name.find(' ') << " Hello, " << name << "!" << endl;
    return 0;
}