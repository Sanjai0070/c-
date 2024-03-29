#include <iostream>
using namespace std;
int main() {
    int marks[] = {85, 70, 60, 45, 30};
    for(int i = 0; i < 5; i++) {
        if(marks[i] >= 80) {
            cout << "Student " << i+1 << " scored A grade." << std::endl;
        } else if(marks[i] >= 60) {
            cout << "Student " << i+1 << " scored B grade." << std::endl;
        } else if(marks[i] >= 40) {
            cout << "Student " << i+1 << " scored C grade." << std::endl;
        } else {
            cout << "Student " << i+1 << " scored F grade." << std::endl;
        }
    }
    int maxMark = 0;
    int j = 0;
    while(j < 5) {
        if(marks[j] > maxMark) {
            maxMark = marks[j];
        }
        j++;
    }
    cout << "The highest mark in the class is: " << maxMark << std::endl;
    switch(maxMark) {
        case 85:
            cout << "Excellent performance!" << std::endl;
            break;
        case 70:
            cout << "Good job!" << std::endl;
            break;
        case 60:
            cout << "Keep it up!" << std::endl;
            break;
        default:
            cout << "Work harder next time!" << std::endl;
    }

    return 0;
}