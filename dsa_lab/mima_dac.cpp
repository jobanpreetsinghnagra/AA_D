#include <iostream>
using namespace std;

void maxMinDAC(int arr[], int l, int r, int &mx, int &mn) {
    if (l == r) {
        mx = mn = arr[l];
        return;
    }
    if (r == l + 1) {
        if (arr[l] < arr[r]) {
            mx = arr[r]; mn = arr[l];
        } else {
            mx = arr[l]; mn = arr[r];
        }
        return;
    }
    int mid = (l + r) / 2, mx1, mn1, mx2, mn2;
    maxMinDAC(arr, l, mid, mx1, mn1);
    maxMinDAC(arr, mid + 1, r, mx2, mn2);
    mx = (mx1 > mx2) ? mx1 : mx2;
    mn = (mn1 < mn2) ? mn1 : mn2;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int mx, mn;
    maxMinDAC(arr, 0, n - 1, mx, mn);
    cout << "Max: " << mx << "\nMin: " << mn << endl;
    return 0;
} 