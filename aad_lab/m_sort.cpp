#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    // Merging the two halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // If elements on the left half are still left
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // If elements on the right half are still left
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copying sorted elements back to the original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int>& arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);       // Sort the left half
    mergeSort(arr, mid + 1, high); // Sort the right half
    merge(arr, low, mid, high);    // Merge the two halves
}

int main() {
    vector<int> test = {20, 1, 5, 66, 33, 52, 3240};
    int n = test.size();

    mergeSort(test, 0, n - 1);

    cout << "Sorted Array is: ";
    for (int num : test) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
