#include <iostream>

/* << tags <<
  int stores whole numbers
  double stores decimals
  char stores single data like grades or unique measurements
  std::string stores text
  bool stores boolean data (true or false)
 */
std::string name = "Dotun";
int main() {
 
     int i;

     i = 12;
     int number = 7.5;
     double gpa = 5.00;
     int age = 21;
     char grade= 'A';

     bool boy = true;     

     std::cout << name << " got all " << grade << "s in his first semester results at " << age << std::endl;
     std::cout << gpa << std::endl;
     std::cout << number << '\n';
     std::cout << i << std::endl; 

    return 0;
}