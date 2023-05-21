#include <iostream>
#include <cmath>


int main() {

    double x = 3;
    double y = 4;
    double z;

    z = std::min(x, y); //shows the minimum value
    z = std::max(x, y); //shows the maximum value
    z = pow(x, y); //raises x to the power of y
    z =sqrt(81); //sqrt is square root.
    z = abs(-9); //shows the absolute value
    z = round(4.33); //turns to integer
    z = ceil(4.45); //rounds up
    z = floor(4.449); //rounds down

    std::cout << z;

    return 0;
}