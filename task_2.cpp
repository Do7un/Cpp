// writting a code for a bmi calculator that allows user imput... 
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
    std::cout << "what is your weight? " << std::endl;
    std::cin >> weight ;
    std::cout << " what is your height? " << std::endl;
    std::cin >> height ;
    
    

    std::cout << "your height in meters is " << (double)height/100<< "m" << std::endl;
    std::cout << "Dear "<< name << " your Bmi is " << (((double)weight / (height * height)) * 1000) << std::endl;

    
    return 0;
}

// took me a few minutes to write the code
// still not sure bout how to take in user input with decimal points. I'll do that in the morning.