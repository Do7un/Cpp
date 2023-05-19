#include <iostream>

int main(){

   std::string name;
   int age;

   std::cout << "what is your age?";
   std::cin >> age;

   std::cout << "what is your full name?";
   std::getline(std::cin >> std::ws, name);
   //std::cin >> name;

   

   std::cout << "hello " << name << '\n';
   std::cout<< "you are " << age << " years old." << std::endl;

    return 0;
}
// for string data containing spaces the other data is not compliled properly
// for user input that contains spaces, use getline() instead.
// in order to accept data from the getline function we add >>std::ws,