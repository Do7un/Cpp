//BMI CALCULATOR

#include <iostream>

int main(){
     
     double weight = 61.02;
     double height = 185.928;

     height/= 100;

     double Bmi = weight / (height * height);
     
     std::cout << Bmi << std::endl;
    return 0;
}