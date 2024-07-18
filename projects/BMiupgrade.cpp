#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

// Function to display a menu and get user choice
int displayMenu() {
    int choice;
    cout << "1. Add New Entry\n";
    cout << "2. Edit Existing Entry\n";
    cout << "3. View All Entries\n";
    cout << "4. Delete Entry\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore(); // Ignore newline character left in buffer
    return choice;
}

// Function to save data to file
void saveData(const string& name, double height, double weight, double bmi, const string& status, const string& day, const string& date, const string& time) {
    ofstream outfile("user_data.txt", ios::app);
    if (outfile.is_open()) {
        outfile << name << "," // Name
                << height << "," // Height
                << weight << "," // Weight
                << bmi << "," // BMI
                << status << "," // Status
                << day << "," // Day
                << date << "," // Date
                << time << endl; // Time
        outfile.close();
    } else {
        cout << "Error opening file for writing!" << endl;
    }
}

// Function to display existing entries
void displayEntries() {
    ifstream infile("user_data.txt");
    if (infile.is_open()) {
        string line;
        int index = 0;
        while (getline(infile, line)) {
            stringstream ss(line);
            string name, status, day, date, time;
            double height, weight, bmi;
            getline(ss, name, ',');
            ss >> height; ss.ignore();
            ss >> weight; ss.ignore();
            ss >> bmi; ss.ignore();
            getline(ss, status, ',');
            getline(ss, day, ',');
            getline(ss, date, ',');
            getline(ss, time, ',');
            cout << "Entry " << index++ << ":\n";
            cout << "  Name: " << name << "\n";
            cout << "  Height: " << height << " cm\n";
            cout << "  Weight: " << weight << " kg\n";
            cout << "  BMI: " << bmi << "\n";
            cout << "  Status: " << status << "\n";
            cout << "  Day: " << day << "\n";
            cout << "  Date: " << date << "\n";
            cout << "  Time: " << time << "\n";
        }
        infile.close();
    } else {
        cout << "Error opening file for reading!" << endl;
    }
}

// Function to edit an existing entry
void editEntry() {
    vector<string> entries;
    ifstream infile("user_data.txt");
    if (infile.is_open()) {
        string line;
        while (getline(infile, line)) {
            entries.push_back(line);
        }
        infile.close();
    } else {
        cout << "Error opening file for reading!" << endl;
        return;
    }

    displayEntries();

    int index;
    cout << "Enter the index of the entry you want to edit: ";
    cin >> index;
    cin.ignore(); // Ignore newline character left in buffer

    if (index < 0 || index >= entries.size()) {
        cout << "Invalid index!" << endl;
        return;
    }

    string name, status;
    double weight;
    double height;

    cout << "Editing entry: " << entries[index] << endl;

    cout << "Enter new name (min 2 characters): ";
    getline(cin, name);
    while (name.length() < 2) {
        cout << "Name must be at least 2 characters long. Please enter again: ";
        getline(cin, name);
    }

    cout << "Enter new weight in kg: ";
    cin >> weight;
    cout << "Enter new height in cm: ";
    cin >> height;

    // Calculate new BMI
    double bmi = weight / ((height / 100) * (height / 100));
    
    if (bmi >= 25.0) {
        status = "Overweight";
    } else if (bmi <= 18.5) {
        status = "Underweight";
    } else {
        status = "Normal weight";
    }

    // Get current time for the entry
    time_t timetoday;
    time(&timetoday);
    tm *local_time = localtime(&timetoday);
    const char* daysOfWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    const char* months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    const char* day = daysOfWeek[local_time->tm_wday];
    const char* month = months[local_time->tm_mon];
    int year = local_time->tm_year + 1900;
    char timeBuffer[10];
    int hour12 = local_time->tm_hour % 12;
    if (hour12 == 0) hour12 = 12;
    sprintf(timeBuffer, "%02d:%02d:%02d", hour12, local_time->tm_min, local_time->tm_sec);
    string date = to_string(local_time->tm_mday) + "/" + to_string(local_time->tm_mon + 1) + "/" + to_string(year);

    // Update the selected entry
    entries[index] = name + "," + to_string(height) + "," + to_string(weight) + "," + to_string(bmi) + "," + status + "," + day + "," + date + "," + timeBuffer;

    // Rewrite the file with updated entries
    ofstream outfile("user_data.txt", ios::trunc);
    if (outfile.is_open()) {
        for (const auto& entry : entries) {
            outfile << entry << endl;
        }
        outfile.close();
    } else {
        cout << "Error opening file for writing!" << endl;
    }
}

// Function to delete an entry
void deleteEntry() {
    vector<string> entries;
    ifstream infile("user_data.txt");
    if (infile.is_open()) {
        string line;
        while (getline(infile, line)) {
            entries.push_back(line);
        }
        infile.close();
    } else {
        cout << "Error opening file for reading!" << endl;
        return;
    }

    displayEntries();

    int index;
    cout << "Enter the index of the entry you want to delete: ";
    cin >> index;
    cin.ignore(); // Ignore newline character left in buffer

    if (index < 0 || index >= entries.size()) {
        cout << "Invalid index!" << endl;
        return;
    }

    // Delete the selected entry
    entries.erase(entries.begin() + index);

    // Rewrite the file with updated entries
    ofstream outfile("user_data.txt", ios::trunc);
    if (outfile.is_open()) {
        for (const auto& entry : entries) {
            outfile << entry << endl;
        }
        outfile.close();
    } else {
        cout << "Error opening file for writing!" << endl;
    }
}

int main() {
    int choice;
    do {
        choice = displayMenu();

        switch (choice) {
            case 1: {
                string name, status;
                double weight;
                double height;

                // Get current time for the entry
                time_t timetoday;
                time(&timetoday);
                tm *local_time = localtime(&timetoday);
                const char* daysOfWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
                const char* months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
                const char* day = daysOfWeek[local_time->tm_wday];
                const char* month = months[local_time->tm_mon];
                int year = local_time->tm_year + 1900;
                char timeBuffer[10];
                int hour12 = local_time->tm_hour % 12;
                if (hour12 == 0) hour12 = 12;
                sprintf(timeBuffer, "%02d:%02d:%02d", hour12, local_time->tm_min, local_time->tm_sec);
                string date = to_string(local_time->tm_mday) + "/" + to_string(local_time->tm_mon + 1) + "/" + to_string(year);

                cout << "Welcome, Good " << (local_time->tm_hour < 12 ? "Morning" : (local_time->tm_hour < 17 ? "Afternoon" : "Evening")) << "!" << endl;

                cout << "Enter your name (min 2 characters): ";
                getline(cin, name);
                while (name.length() < 2) {
                    cout << "Name must be at least 2 characters long. Please enter again: ";
                    getline(cin, name);
                }

                cout << "Enter your weight in kg: ";
                cin >> weight;
                cout << "Enter your height in cm: ";
                cin >> height;

                // Calculate BMI
                double bmi = weight / ((height / 100) * (height / 100));
                cout << "Your height in feet is " << height * 0.0328084 << " ft" << endl;
                cout << "Dear " << name << ", your BMI is " << bmi << endl;

                if (bmi >= 25.0) {
                    status = "Overweight";
                    cout << "You are overweight." << endl;
                } else if (bmi <= 18.5) {
                    status = "Underweight";
                    cout << "You are underweight." << endl;
                } else {
                    status = "Normal weight";
                    cout << name << ", your BMI is within the normal range." << endl;
                }

                saveData(name, height, weight, bmi, status, day, date, timeBuffer);
                break;
            }
            case 2:
                editEntry();
                break;
            case 3:
                displayEntries();
                break;
            case 4:
                deleteEntry();
                break;
            case 5:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
