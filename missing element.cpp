#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 2, 3, 4, 7, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int i = 0;
    while (i < n) {
        if (arr[i] != i) {
            cout << "The smallest missing element is: " << i << endl;
            break;
        }
        i++;
    }
    
    return 0;
}