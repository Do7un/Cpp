#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main() {
    using namespace std;

    string name;
    int choice;

    cout << "Shall we play a game of rock, paper, or scissors?" << endl;
    cout << "1 = rock, 2 = paper, and 3 = scissors" << endl;
    cout << "What is your name? ";
    getline(cin >> ws, name);
    cout << "1, 2, or 3? ";
    cin >> choice;

    srand(time(0));
    int randomNumber = (rand() % 3) + 1;

    switch (choice) {
        case 1:
            if (randomNumber == 1)
                cout << "You choose rock and computer choose scissors. " << name << " WON" << endl;
            else if (randomNumber == 2)
                cout << "You choose rock and computer choose paper. " << name << " LOST, COMPUTER WON" << endl;
            else if (randomNumber == 3)
                cout << "You choose rock and computer choose rock. " << name << " TIED with COMPUTER" << endl;
            break;
        case 2:
            if (randomNumber == 1)
                cout << "You choose paper and computer choose scissors. " << name << " LOST, COMPUTER WON" << endl;
            else if (randomNumber == 2)
                cout << "You choose paper and computer choose paper. " << name << " TIED with COMPUTER" << endl;
            else if (randomNumber == 3)
                cout << "You choose paper and computer choose rock. " << name << " WON" << endl;
            break;
        case 3:
            if (randomNumber == 1)
                cout << "You choose scissors and computer choose scissors. " << name << " TIED with COMPUTER" << endl;
            else if (randomNumber == 2)
                cout << "You choose scissors and computer choose paper. " << name << " WON" << endl;
            else if (randomNumber == 3)
                cout << "You choose scissors and computer choose rock. " << name << " LOST, COMPUTER WON" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}
