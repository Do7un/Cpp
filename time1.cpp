#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main(){
    system("CLS");
    time_t timetoday;
    time(&timetoday);
    tm *local_time = localtime(&timetoday);

    // Array with the names of the days of the week
    const char* daysOfWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    // Print the day of the week
    cout << "Day: " << daysOfWeek[local_time->tm_wday] << endl;

    // Format the date as dd/mm/yyyy
    cout << "Date: " << setw(2) << setfill('0') << local_time->tm_mday << "/"
         << setw(2) << setfill('0') << local_time->tm_mon + 1 << "/"
         << local_time->tm_year + 1900 << endl;

    // Format the time as HH:MM:SS
    cout << "Time: " << setw(2) << setfill('0') << local_time->tm_hour << ":"
         << setw(2) << setfill('0') << local_time->tm_min << ":"
         << setw(2) << setfill('0') << local_time->tm_sec << endl;

    return 0;
}
