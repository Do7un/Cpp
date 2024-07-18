#include <iostream>
#include <string>

int main() {
   using namespace std;
    
    string name;
    double weight;
    double height;
    

    cout << "What is your full name? " << endl;
    getline(cin >> ws, name); 

    if (name.length() == 1){
        cout << " You didn't enter a name " << endl;
    }
    else{
        cout << "What is your weight in kg? " << endl;
    cin >> weight;
    cout << "What is your height in cm? " << endl;
    cin >> height;

    cout << "Your height in feets is " << height * (double)0.0328084 << "ft" << endl;
    double bmi = weight / ((height / 100) * (height / 100));
    cout << "Dear " << name << ", your BMI is " << bmi << endl;

    if (bmi >= 25.0) {
        cout << "You are overweight." << endl;
    } else if (bmi <= 18.5) {
        cout << "You are underweight." << endl;
    } else {
        cout << name << " Your BMI is within the normal range." << endl;
    }
    }
    return 0;
}
