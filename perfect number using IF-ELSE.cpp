#include <iostream>
#include <cmath>


int isPerfect(int num) {
    int sum = 1; 
    int root = sqrt(num); 

    
    if (root * root == num) {
        sum += root; 
    }

    
    if (2 * sum == num + 1) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

   
    if (isPerfect(num)) {
        std::cout << num << " is a perfect number." << std::endl;
    } else {
        std::cout << num << " is not a perfect number." << std::endl;
    }

    return 0;
}