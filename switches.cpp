#include <iostream>

int main(){
   
   int month;
   std::cout <<"Enter the month (1-12)" << std::endl;
   std::cin >> month;

   switch (month) {
    case 1: 
      std::cout << "it's january";
      break;
    case 2: 
      std::cout << "it's february";
      break;
    case 3: 
      std::cout << "it's march";
      break;
    case 4: 
      std::cout << "it's april";
      break;
    case 5: 
      std::cout << "it's may";
      break;
    case 6: 
      std::cout << "it's june";
      break;
    case 7: 
      std::cout << "it's july";
      break;
    case 8: 
      std::cout << "it's august";
      break;
    case 9: 
      std::cout << "it's september";
      break;
    case 10: 
      std::cout << "it's october";
      break;
    case 11: 
      std::cout << "it's november";
      break;
    case 12: 
      std::cout << "it's december";
      break;
    default:
    std::cout << " you have entered an invalid month number" << std::endl;
   }

    return 0;
}
//swithes 