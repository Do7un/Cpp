#include <iostream>

int main(){
    using namespace std;

    int temp;

    cout << " Enter the temperature" << endl;
    cin >> temp;

     if(temp > 0 &&  temp < 30){
        std::cout << " The temperature is good";
     }else {
        std::cout << " The temperature is bad";
     }

// || check if at least one of the two conditions is true
// ! reverses  the logical state of its operand
    return 0;
} 