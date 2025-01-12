#include <bits/stdc++.h>
using namespace std;

template <typename T, size_t N>
int bsearch(T (&a)[N], T target) {
    // N is automatically deduced as the size of the array 'a'
    sort(a, a + N);

    int low = 0;
    int high = N - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] == target) {
            return mid;
        } else if (a[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {10, 4, 45, 34, 6, 3}; 
    int key;

    cout << "Enter the key: ";
    cin >> key;

    int result = bsearch(arr, key); 

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}