#include <bits/stdc++.h>
using namespace std;

bool bin_search(vector<int>&arr, int target) {
    
    sort(arr.begin,arr.end());
    int N = arr.begin();
    if(N == 0)return false;
    int low = 0;
    int high = N - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] == target) {
            return true;
        }
        else if (a[mid] < target) {
            low = mid + 1;
        }
        else {
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

    bool result = bin_search(arr, key);
     
    return 0;
}