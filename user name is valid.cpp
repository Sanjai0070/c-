#include <iostream>
#include <string>
using namespace std;

int isValidUserName(const string& userName) {
    if (userName.length() < 6 || userName.length() > 16) {
        return false;
    }

    int digitCount = 0;
    int underscoreCount = 0;

    for (char c : userName) {
        if (!isalpha(c) && c != '_') {
            return false;
        }

        if (isdigit(c)) {
            digitCount++;
        }

        if (c == '_') {
            underscoreCount++;
        }
    }

    if (digitCount > 2 || underscoreCount > 1) {
        return false;
    }

    return true;
}

int main() {
    string userInput;
    cout << "Enter a user name: ";
    cin >> userInput;

    if (isValidUserName(userInput)) {
        cout << "The user name is valid." << endl;
    } else {
        cout << "The user name is invalid." << endl;
    }

    return 0;
}