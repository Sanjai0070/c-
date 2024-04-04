#include <iostream>
#include <string>
using namespace std;
class StringConverter {
private:
    string str;

public:
    StringConverter(const string& s) : str(s) {}

    string toUpper() {
        for (char& c : str) {
            if (c >= 'a' && c <= 'z') {
                c = c - 32;
            }
        }
        return str;
    }

    string toLower() {
        for (char& c : str) {
            if (c >= 'A' && c <= 'Z') {
                c = c + 32;
            }
        }
        return str;
    }
};

int main() {
    string input = "Hello World!";
    StringConverter converter(input);

    cout << "Original string: " << input << endl;
    cout << "Uppercase string: " << converter.toUpper() << endl;
    cout << "Lowercase string: " << converter.toLower() <<endl;

    return 0;
}