#include <iostream>
#include <string>
using namespace std;

int countUppercase(const string& text) {
    int count = 0;
    for (char c : text) {
        if (c >= 'A' && c <= 'Z') {
            count++;
        }
    }
    return count;
}

int main() {
    string text = " Artificial Intelligence is Intelligence demonstrated by machines, as opposed to the natural intelligence displayed by animals  and humans.";
    int uppercaseCount = countUppercase(text);
    cout << "Number of uppercase alphabets: " << uppercaseCount << endl;
    return 0;
}
