#include <iostream>
#include <vector>
using namespace std;

int max_val, min_val;

void mini_maxi(vector<int> &arr, int i, int j) {
    if (i == j) { ///array size is one
        max_val = min_val = arr[i];
    }
    else if (i == j - 1) { ///array size is two
        if (arr[i] < arr[j]) {
            max_val = arr[j];
            min_val = arr[i];
        } else {
            max_val = arr[i];
            min_val = arr[j];
        }
    }
    else { ///array size > 2
        int mid = (i + j) / 2;
        int max1, min1;

        // Left half
        mini_maxi(arr, i, mid);
        max1 = max_val;
        min1 = min_val;

        // Right half
        mini_maxi(arr, mid + 1, j);

        // Combine results
        if (max_val < max1)
            max_val = max1;
        if (min_val > min1)
            min_val = min1;
    }
}

int main() {
    vector<int> test = {90, 20, 30, 40, 50, 72, 41, 1, 2};
    int x = 0;
    int y = test.size() - 1;

    // Initialize global variables
    max_val = test[0];
    min_val = test[0];

    mini_maxi(test, x, y);

    cout << "Using DAC, Min and Max values are: " << min_val << " , " << max_val << endl;
    return 0;
}
