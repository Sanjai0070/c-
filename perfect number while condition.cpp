#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    int i = 1;
    while (i <= n/2) {
        if (n % i == 0) {
            sum += i;
        }
        i++;
    }

    if (sum == n && sum != 0) {
        cout << n << " is a perfect number." << endl;
    } else {
        cout << n << " is not a perfect number." << endl;
    }

    return 0;
}