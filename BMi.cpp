#include <iostream>
#include <string>

int main() {
    std::string name;
    double weight;
    double height;

    std::cout << "What is your full name? " << std::endl;
    std::getline(std::cin >> std::ws, name);
    std::cout << "What is your weight in kg? " << std::endl;
    std::cin >> weight;
    std::cout << "What is your height in cm? " << std::endl;
    std::cin >> height;

    std::cout << "Your height in meters is " << height / 100 << "m" << std::endl;
    double bmi = weight / ((height / 100) * (height / 100));
    std::cout << "Dear " << name << ", your BMI is " << bmi << std::endl;

    if (bmi >= 25.0) {
        std::cout << "You are overweight." << std::endl;
    } else if (bmi <= 18.5) {
        std::cout << "You are underweight." << std::endl;
    } else {
        std::cout << name << " Your BMI is within the normal range." << std::endl;
    }

    return 0;
}
