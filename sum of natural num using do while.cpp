#include <iostream>

int main() {
    int n, sum = 0;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int i = 1;
    do {
        sum += i;
        i++;
    } while (i <= n);

    std::cout << "The sum of the first " << n << " natural numbers is: " << sum << std::endl;

    return 0;
}