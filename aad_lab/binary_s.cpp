#include <bits/stdc++.h>
using namespace std;

bool bin_search(vector<int>& a, int target) {
    sort(a.begin(), a.end()); // Sort the vector
    int N = a.size(); // Get the size of the vector
    if (N == 0) return false; // If the vector is empty, return false

    int low = 0;
    int high = N - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] == target) {
            return true;
        } else if (a[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return false; // Return false if the target is not found
}

int main() {
    vector<int> arr = {10, 4, 45, 34, 6, 3}; // Initialize the vector
    int key;

    cout << "Enter the key: ";
    cin >> key;

    bool result = bin_search(arr, key);

    if (result) {
        cout << "Key found!" << endl;
    } else {
        cout << "Key not found." << endl;
    }

    return 0;
}
