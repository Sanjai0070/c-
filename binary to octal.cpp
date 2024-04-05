#include <iostream>
#include <cmath>
using namespace std;

class BinaryToOctalConverter {
private:
    int binaryNumber;
    int octalNumber;

    int convertBinaryToOctal(int binary) {
        int octal = 0, decimal = 0, i = 0;

        while (binary != 0) {
            decimal += (binary % 10) * pow(2, i);
            ++i;
            binary /= 10;
        }

        i = 1;

        while (decimal != 0) {
            octal += (decimal % 8) * i;
            decimal /= 8;
            i *= 10;
        }

        return octal;
    }

public:
    BinaryToOctalConverter(int binary) : binaryNumber(binary) {
        octalNumber = convertBinaryToOctal(binaryNumber);
    }

    void displayResult() {
        cout << "Binary Number: " << binaryNumber << endl;
        cout << "Octal Number: " << octalNumber << endl;
    }
};

int main() {
    int binaryInput;
    cout << "Enter a binary number: ";
    cin >> binaryInput;

    BinaryToOctalConverter converter(binaryInput);
    converter.displayResult();

    return 0;
}