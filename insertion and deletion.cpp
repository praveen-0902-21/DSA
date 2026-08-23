#include <iostream>
using namespace std;

void insertElement(int arr[], int &n, int capacity, int pos, int val) {
    if (n >= capacity) {
        cout << "Array is full.\n";
        return;
    }
    if (pos < 0 || pos > n) {
        cout << "Invalid position.\n";
        return;
    }
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;
}

void deleteElement(int arr[], int &n, int pos) {
    if (n <= 0) {
        cout << "Array is empty.\n";
        return;
    }
    if (pos < 0 || pos >= n) {
        cout << "Invalid position.\n";
        return;
    }
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[10] = {10, 20, 30, 40};
    int n = 4;

    insertElement(arr, n, 10, 2, 25);
    display(arr, n);

    deleteElement(arr, n, 1);
    display(arr, n);

    return 0;
}
