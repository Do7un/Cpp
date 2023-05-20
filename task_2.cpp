// writting a code for a bmi calculator that allows user input... 
//technically an upgrade of task 1
#include <iostream>

/*namespace lenght {
    double lenght/=100;
}*/

int main(){

    std::string name;
    int weight;
    int height;
    
    
    std::cout << " what is your full name?" << std::endl;
    std::getline(std::cin >> std::ws, name);
    std::cout << "what is your weight in kg? " << std::endl;
    std::cin >> weight ;
    std::cout << " what is your height in cm? " << std::endl;
    std::cin >> height ;
    
    

    std::cout << "your height in meters is " << (double)height/100<< "m" << std::endl;
    std::cout << "Dear "<< name << " your Bmi is " << (((double)weight / (height * height)) * 10000) << std::endl;

    double Bmi;

    std::cout << " what is your Bmi?" << std::endl;
    std::cin >> Bmi;

    if (Bmi >= (double)25.99) {
        std::cout << "your are overweight." << std::endl;
    } else if (Bmi <= (double)18.49) {
        std::cout << "your are underweight." << std::endl;
    } else {
        std::cout << "your Bmi is Good." << std::endl;
    }

    return 0;
}

// took me a few minutes to write the code
// still not sure bout how to take in user input with decimal points. I'll do that in the morning.