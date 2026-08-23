#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void insertAtEnd(vector<int>& arr, int val) {
    arr.push_back(val);
}

void insertAtBeginning(vector<int>& arr, int val) {
    arr.insert(arr.begin(), val);
}

void insertAtKey(vector<int>& arr, int key, int val) {
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        if (*it == key) {
            arr.insert(it + 1, val);
            return;
        }
    }
}

void deleteAtEnd(vector<int>& arr) {
    if (!arr.empty()) arr.pop_back();
}

void deleteAtBeginning(vector<int>& arr) {
    if (!arr.empty()) arr.erase(arr.begin());
}

void deleteKey(vector<int>& arr, int key) {
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        if (*it == key) {
            arr.erase(it);
            return;
        }
    }
}

void moveZeros(vector<int>& arr) {
    int idx = 0;
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] != 0) {
            swap(arr[idx++], arr[i]);
        }
    }
}

void printDuplicates(const vector<int>& arr) {
    unordered_set<int> seen, duplicates;
    for (int x : arr) {
        if (!seen.insert(x).second) {
            duplicates.insert(x);
        }
    }
    for (int x : duplicates) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    vector<int> arr = {1, 2, 3, 4};

    insertAtEnd(arr, 5);
    insertAtBeginning(arr, 0);
    insertAtKey(arr, 2, 99);

    deleteAtEnd(arr);
    deleteAtBeginning(arr);
    deleteKey(arr, 99);

    vector<int> zeros = {0, 1, 0, 3, 12};
    moveZeros(zeros);

    vector<int> dups = {1, 2, 3, 2, 4, 1};
    printDuplicates(dups);

    return 0;
}

