#include <iostream>
using namespace std;

int main() {
    int arr1[] = {5, 10, 15, 20, 25};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[n];

    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    cout << "Copied array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << "\n";

    return 0;
}
