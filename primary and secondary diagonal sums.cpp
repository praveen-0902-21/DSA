#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix (N x N): ";
    cin >> n;

    int matrix[100][100];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int primarySum = 0, secondarySum = 0;
    for (int i = 0; i < n; i++) {
        primarySum += matrix[i][i];
        secondarySum += matrix[i][n - 1 - i];
    }

    cout << "Primary Diagonal Sum: " << primarySum << "\n";
    cout << "Secondary Diagonal Sum: " << secondarySum << "\n";

    if (primarySum > secondarySum) {
        cout << "Larger sum is Primary Diagonal: " << primarySum << "\n";
    } else if (secondarySum > primarySum) {
        cout << "Larger sum is Secondary Diagonal: " << secondarySum << "\n";
    } else {
        cout << "Both diagonals have equal sum: " << primarySum << "\n";
    }

    return 0;
}
