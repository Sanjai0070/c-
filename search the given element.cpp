#include <iostream>
using namespace std;

int search(int arr[], int n, int x, int index) {
    if (index == n) {
        return -1;
    }

    if (arr[index] == x) {
        return index;
    }

    return search(arr, n, x, index + 1);
}

int main() {
    int arr[] = {12,11,34,54,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x =11;

    int index = 0;
    int result = search(arr, n, x, index);

    if (result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element "<<x<<" found at index: " << result+1 << endl;
    }

    return 0;
}