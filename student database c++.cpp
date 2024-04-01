#include <iostream>
#include <string>
using namespace std;

class Student {
public:
   	string name;
    int rollNumber;
    float marks;

public:
    void setDetails(string studentName, int studentRollNumber, float studentMarks) {
        name = studentName;
        rollNumber = studentRollNumber;
        marks = studentMarks;
    }

    void displayDetails() {
        	cout << "Name: " << name <<endl;
        	cout << "Roll Number: " << rollNumber <<endl;
        	cout << "Marks: " << marks <<endl;
    }
};

int main() {
    Student student1;
    Student student2;

    /*student1.setDetails("arun", 101, 95.5);
    student2.setDetails("ajay", 102, 88.0);*/
    student1.name="arun";
    student1.rollNumber=101;
    student1.marks=100;
    

    std::cout << "Student 1 Details:" <<endl;
    student1.displayDetails();

    /*std::cout << "\nStudent 2 Details:" <<endl;
    student2.displayDetails();*/

    return 0;
}
