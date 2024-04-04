#include <iostream>
using namespace std;


void area(int side) {
    int squareArea = side * side;
    cout << "The Area Of Square Value is: " << squareArea << endl;
}


void area(int length, int width) {
    int rectangleArea = length * wB idth;
    cout << "The Area Of the Rectangle Value is: " << rectangleArea << endl;
}

int main() {
    int side, length, width;

    cout << "Enter the side length of the square: ";
    cin >> side;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    area(side); 
    area(length, width); 

    return 0;
}