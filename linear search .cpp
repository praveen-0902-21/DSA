#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {15, 23, 7, 42, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 42;

    int index = linearSearch(arr, n, key);

    if (index != -1) {
        cout << "Element " << key << " found at index " << index << "\n";
    } else {
        cout << "Element " << key << " not found in array\n";
    }

    return 0;
}
