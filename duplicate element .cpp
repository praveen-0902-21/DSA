#include <iostream>
using namespace std;

void printDuplicates(int arr[], int n) {
    cout << "Duplicate elements: ";
    bool found = false;

    for (int i = 0; i < n; i++) {
        bool alreadyChecked = false;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                alreadyChecked = true;
                break;
            }
        }
        if (alreadyChecked) continue;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                found = true;
                break;
            }
        }
    }

    if (!found) cout << "None";
    cout << "\n";
}

int main() {
    int arr[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printDuplicates(arr, n);

    return 0;
}
