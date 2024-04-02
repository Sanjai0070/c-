#include <iostream>

int main() {
    int num1 = 10, num2 = 20;
    int *result = new int;

    *result = num1 + num2;

    std::cout << "Sum of " << num1 << " and " << num2 << " is: " << *result << std::endl;

    

    return 0;
}