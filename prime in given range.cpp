#include <iostream>
using namespace std;

int isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int M, N;
    
   	cout << "Enter the range (M to N): ";
    cin >> M >> N;
    
    cout << "Prime numbers between " << M << " and " << N << " are: ";
    for (int i = M; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    
    return 0;
}