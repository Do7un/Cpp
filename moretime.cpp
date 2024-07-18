#include <iostream>
#include <ctime>
#include <iomanip>
#include <fstream>

using namespace std;

int main(){
    system("CLS");
    time_t timetoday;
    time(&timetoday);
    tm *local_time = localtime(&timetoday);

    // Determine the time of day
    const char* timeOfDay;
    if (local_time->tm_hour < 12) {
        timeOfDay = "Morning";
    } else if (local_time->tm_hour < 17) {
        timeOfDay = "Afternoon";
    } else {
        timeOfDay = "Evening";
    }

    // Convert hour to 12-hour format
    int hour12 = local_time->tm_hour % 12;
    if (hour12 == 0) hour12 = 12; // Handle the case for midnight and noon

    // Array with the names of the days of the week
    const char* daysOfWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    // Array with the names of the months
    const char* months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    // Get the current day, month, and year
    const char* day = daysOfWeek[local_time->tm_wday];
    const char* month = months[local_time->tm_mon];
    int year = local_time->tm_year + 1900;

    // Format the time as HH:MM:SS
    char buffer[10];
    sprintf(buffer, "%02d:%02d:%02d", hour12, local_time->tm_min, local_time->tm_sec);

    // Greet the user
    cout << "Good " << timeOfDay << "!" << endl;

    // Record the current date and time
    cout << "Recording current date and time..." << endl;

    // Open a file to record the date and time
    ofstream outfile("date_time_record.txt", ios::app);
    if(outfile.is_open()){
        outfile << "Day Month Year Time: " << day << " " << month << " " << year << " " << buffer << " " << timeOfDay << endl;
        outfile.close();
        cout << "Date and time recorded successfully." << endl;
    } else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}
