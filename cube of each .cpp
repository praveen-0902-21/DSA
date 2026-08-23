#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int cubes[n];

    for (int i = 0; i < n; i++) {
        cubes[i] = arr[i] * arr[i] * arr[i];
    }

    cout << "Cubed array: ";
    for (int i = 0; i < n; i++) {
        cout << cubes[i] << " ";
    }
    cout << "\n";

    return 0;
}
