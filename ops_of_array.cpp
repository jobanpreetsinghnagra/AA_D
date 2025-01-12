#include <iostream>
using namespace std;

class Array {
private:
    int* arr;       // Pointer to the array
    int capacity;   // Maximum size of the array
    int size;       // Current number of elements in the array

public:
    // Constructor to initialize the array with a given capacity
    Array(int cap) {
        capacity = cap;
        size = 0;
        arr = new int[capacity];
    }

    // Destructor to free allocated memory
    ~Array() {
        delete[] arr;
    }

    // Function to insert an element at a given index
    void insert(int index, int value) {
        if (size == capacity) {
            cout << "Array is full. Cannot insert element." << endl;
            return;
        }
        if (index < 0 || index > size) {
            cout << "Invalid index. Insertion failed." << endl;
            return;
        }
        for (int i = size; i > index; --i) {
            arr[i] = arr[i - 1];
        }
        arr[index] = value;
        size++;
        cout << "Inserted " << value << " at index " << index << "." << endl;
    }

    // Function to delete an element at a given index
    void remove(int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index. Deletion failed." << endl;
            return;
        }
        cout << "Deleted element " << arr[index] << " from index " << index << "." << endl;
        for (int i = index; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    // Function to update an element at a given index
    void update(int index, int value) {
        if (index < 0 || index >= size) {
            cout << "Invalid index. Update failed." << endl;
            return;
        }
        cout << "Updated element at index " << index << " from " << arr[index] << " to " << value << "." << endl;
        arr[index] = value;
    }

    // Function to display the elements of the array
    void display() {
        if (size == 0) {
            cout << "Array is empty." << endl;
            return;
        }
        cout << "Array elements: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Create an array with a capacity of 10
    Array arr(10);

    // Perform operations
    arr.insert(0, 5);
    arr.insert(1, 10);
    arr.insert(1, 7);
    arr.display();

    arr.update(1, 15);
    arr.display();

    arr.remove(2);
    arr.display();

    arr.insert(3, 20);
    arr.display();

    return 0;
}
