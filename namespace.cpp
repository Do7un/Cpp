#include <iostream>

/*
namespace ia used to assign more than one data to a particular variable, an application of namespaces
will be in game progress and data progression.... NOTE namespaces can only be assigned to a text type data
*/

namespace a {
    double weight = 60;
}
namespace b {
    double weight = 60.52;
}
namespace c {
    double weight = 59.87;
}
namespace d {
    double weight = 60.2;
}

int main() {
     
     double weight = 61;

     std::cout << b::weight << std::endl;

    return 0;
}

/*
 using namespace (assigned text) will automatically be chosen
*/