#include <iostream>
#include <string>

int main(){
    
    using namespace std;

    string username;
    int age;

    cout << "set username?" << std::endl;
    getline(cin >> ws, username); // obseerve this line DOTUN.
    cout << "what is your age?" << std::endl;
    cin >> age;

    if (age >= 80 ) {
        cout << username << " where do you think you are going old man?" << std::endl;
    }
    else if (age >= 18) {
        cout << username << " welcome to the site" << std::endl;
    } else if (age < 6 ) {
        cout << username << " how did you get here?" << std::endl;
    } 
    else {
        cout << username << " you are not old enough to visit this site" << std::endl;
    }

    return 0;
}


// you can add multiple else if statements.
// code are excuted in order of precedence.