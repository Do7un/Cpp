#include <iostream>

int main(){

    //char x = 100;

    //std::cout << (char)100 << std::endl;
    int correct = 7;
    int question = 10;
    double score = correct/(double)question * 100;

    std::cout << score << "%"<< '\n';

    return 0;
}