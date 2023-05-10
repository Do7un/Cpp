#include <iostream>

typedef std::string text_t;
typedef int num_t;

int main(){

      text_t mame = "Dotun";
      num_t age = 21;

      std::cout << age << '\n';
      std::cout << mame << std::endl;

    return 0;
} 

// typedef has been replaced with the using data type

#include <iostream>

using text_t = std::string;

int main(){

     text_t lastname = "Akinbo";

     std::cout << lastname << std::endl;
 
    return 0;
}