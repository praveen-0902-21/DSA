#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int matrix[100][100], sum = 0;
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
            sum += matrix[i][j];
        }
    }

    cout << "Sum of all elements: " << sum << "\n";
    return 0;
}
