#include <iostream>
using namespace std;

#define MAX 100

void display(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void insert(int arr[], int &n, int elem, int pos) {
    if (pos < 0 || pos > n || n == MAX) {
        cout << "Invalid position or array full!\n";
        return;
    }
    for (int i = n; i > pos; i--)
        arr[i] = arr[i-1];
    arr[pos] = elem;
    n++;
}

void remove(int arr[], int &n, int pos) {
    if (pos < 0 || pos >= n) {
        cout << "Invalid position!\n";
        return;
    }
    for (int i = pos; i < n-1; i++)
        arr[i] = arr[i+1];
    n--;
}

int main() {
    int arr[MAX], n = 0, choice, elem, pos;
    while (true) {
        cout << "\nMenu:\n1. Create Array\n2. Display Array\n3. Insert Element\n4. Delete Element\n5. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter number of elements: ";
                cin >> n;
                if (n > MAX) n = MAX;
                cout << "Enter elements: ";
                for (int i = 0; i < n; i++)
                    cin >> arr[i];
                break;
            case 2:
                display(arr, n);
                break;
            case 3:
                cout << "Enter element and position: ";
                cin >> elem >> pos;
                insert(arr, n, elem, pos);
                break;
            case 4:
                cout << "Enter position to delete: ";
                cin >> pos;
                remove(arr, n, pos);
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice!\n";
        }
    }
    return 0;
} 