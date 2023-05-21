#include <iostream>
//#include <string>

int main(){

   std::string filename = "test";

   std::cout << filename;


    return 0;
}

// is including <string> really necessary?
//Answer from chat
/*
  Including `<string>` is necessary if you want to use the `std::string` class and related string manipulation functions in C++. Without including `<string>`, the compiler won't recognize the `std::string` type and the associated string operations.

The `<string>` header provides important declarations and definitions required for string handling. It defines the `std::string` class and its member functions, such as `length()`, `substr()`, `find()`, `compare()`, and many others. It also includes necessary support for operator overloading, memory management, and string manipulation algorithms.

If you attempt to use `std::string` or any string-related functions without including `<string>`, the compiler will likely generate an error indicating that the identifier is unknown or undefined.

Therefore, including `<string>` is crucial when you want to work with strings in C++. It ensures that the necessary declarations and definitions are available to your program, allowing you to utilize the powerful string manipulation capabilities provided by the C++ standard library.
*/