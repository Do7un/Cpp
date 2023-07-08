#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Set the seed for random number generation
    std::srand(std::time(0));

    for (int i = 0; i < 5; i++) {
        int randomNumber = (std::rand() % 3) + 1;
        std::cout << "Random Number: " << randomNumber << std::endl;
    }

    return 0;
}
