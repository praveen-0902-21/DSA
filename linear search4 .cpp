#include <iostream>
using namespace std;

int main() {
    int r, c, key;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int matrix[100][100];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter element to search: ";
    cin >> key;

    bool found = false;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] == key) {
                cout << "Element found at Row " << i << ", Column " << j << "\n";
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (!found) {
        cout << "Element not found in matrix.\n";
    }

    return 0;
}
