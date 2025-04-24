#include <iostream>
using namespace std;

// Function to find min and max using Divide and Conquer
void findMinMax(int arr[], int left, int right, int &min, int &max) {
    // Base Case: If there is only one element
    if (left == right) {
        min = max = arr[left];
        return;
    }
    
    // Base Case: If there are two elements
    if (right == left + 1) {
        if (arr[left] < arr[right]) {
            min = arr[left];
            max = arr[right];
        } else {
            min = arr[right];
            max = arr[left];
        }
        return;
    }

    // Divide: Find mid index
    int mid = (left + right) / 2;
    int minLeft, maxLeft, minRight, maxRight;

    // Recursively find min and max in left half
    findMinMax(arr, left, mid, minLeft, maxLeft);

    // Recursively find min and max in right halfr
    findMinMax(arr, mid + 1, right, minRight, maxRight);

    // Conquer: Combine results
    min = (minLeft < minRight) ? minLeft : minRight;
    max = (maxLeft > maxRight) ? maxLeft : maxRight;
}

int main() {
    int arr[] = {7, 2, 9, 1, 6, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min, max;
    // Calling the findMinMax function
    findMinMax(arr, 0, n - 1, min, max);

    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;

    return 0;
}
