#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int matrix[100][100];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Row-Major Order: ";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << matrix[i][j] << " ";
        }
    }
    cout << "\n";

    cout << "Column-Major Order: ";
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            cout << matrix[i][j] << " ";
        }
    }
    cout << "\n";

    return 0;
}
