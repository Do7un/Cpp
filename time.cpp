#include <iostream>
#include <ctime>

using namespace std;

int main(){
    system("CLS");
    time_t timetoday;
    time( &timetoday);
    cout << "Date and time as per todays "
          << asctime(localtime(&timetoday));


    return 0;
}