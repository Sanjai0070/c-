#include <iostream>
using namespace std;

int main() {
    int arr[] = {0,1,2,3,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int missing = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] != i ) {
            missing = i;
            break;
        }
    }

    if (missing == -1) {
        missing = n + 1;
    }

    cout << "The smallest missing element is: " << missing << endl;

    return 0;
}