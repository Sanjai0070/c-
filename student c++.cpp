#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int marks;

    void input() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
    }
};

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    Student students[numStudents];
    
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter details for student " << i+1 << ":" << endl;
        students[i].input();
    }

    int maxMarks = 0;
    int index = 0;

    for (int i = 0; i < numStudents; i++) {
        if (students[i].marks > maxMarks) {
            maxMarks = students[i].marks;
            index = i;
        }
    }

    cout << "Student with the highest marks:" << endl;
    cout << "Name: " << students[index].name << endl;
    cout << "Marks: " << students[index].marks << endl;

    return 0;
}
