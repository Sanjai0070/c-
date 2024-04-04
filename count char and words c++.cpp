#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    cout << "Enter the text: ";
    getline(cin, text);

    int wordCount = 0;
    int charCount = 0;

    for (char c : text) 
	{
        if (c == ' ' || c == '\n' || c == '\t') {
            wordCount++;
        }
        charCount++;
    }

    wordCount++;

    cout << "Number of words: " << wordCount << endl;
    cout << "Number of characters: " << charCount << endl;

    return 0;
}