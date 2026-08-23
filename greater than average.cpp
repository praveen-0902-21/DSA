#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double avg = sum / n;

    cout << "Average: " << avg << "\n";
    cout << "Elements greater than average: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] > avg) {
            cout << arr[i] << " ";
        }
    }
    cout << "\n";

    return 0;
}
