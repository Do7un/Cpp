#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class Record {
public:
    int id;
    std::string name;
    int age;
    std::string address;

    Record() {}
    Record(int id, std::string name, int age, std::string address)
        : id(id), name(name), age(age), address(address) {}

    friend std::ostream& operator<<(std::ostream& os, const Record& record) {
        os << "ID: " << record.id << "\nName: " << record.name 
           << "\nAge: " << record.age << "\nAddress: " << record.address << '\n';
        return os;
    }
};

class Database {
private:
    std::vector<Record> records;
    const std::string filename = "database.txt";

    void loadFromFile() {
        std::ifstream infile(filename);
        if (infile.is_open()) {
            Record record;
            while (infile >> record.id >> record.name >> record.age >> record.address) {
                records.push_back(record);
            }
            infile.close();
        }
    }

    void saveToFile() {
        std::ofstream outfile(filename);
        if (outfile.is_open()) {
            for (const auto& record : records) {
                outfile << record.id << ' ' << record.name << ' ' << record.age << ' ' << record.address << '\n';
            }
            outfile.close();
        }
    }

public:
    Database() {
        loadFromFile();
    }

    ~Database() {
        saveToFile();
    }

    void addRecord(const Record& record) {
        records.push_back(record);
    }

    void displayRecords() const {
        for (const auto& record : records) {
            std::cout << record << '\n';
        }
    }
    
    // Additional functions for search, update, and delete would go here
};

int main() {
    Database db;
    db.addRecord(Record(1, "John Doe", 30, "123 Main St"));
    db.displayRecords();

    return 0;
}