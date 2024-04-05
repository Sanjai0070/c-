#include <iostream>
#include <string>
using namespace std;

int main() {
    string paragraph;
   	cout << "Enter a paragraph: ";
	getline(cin, paragraph);

    int word_count = 0;
    for (size_t i = 0; i < paragraph.size(); ++i) {
        if (isspace(paragraph[i])) {
            ++word_count;
        }
    	if(paragraph[i]==' '&&paragraph[i-1]==' ')
    	{
    		word_count--;
		}
    }

    if (paragraph[0] == ' ') {
        --word_count;
    }

   cout << "Number of words in the paragraph: " << word_count << endl;

    return 0;
}
