#include <iostream>
#include <vector>
using namespace std;

class MaxHeap {
private:
    vector<int> heap;

    // Function to heapify up (maintain max-heap property after insertion)
    void heapifyUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (heap[index] > heap[parent]) {
                swap(heap[index], heap[parent]);
                index = parent;
            } else {
                break;
            }
        }
    }

    // Function to heapify down (maintain max-heap property after deletion)
    void heapifyDown(int index) {
        int size = heap.size();
        while (true) {
            int largest = index;
            int left = 2 * index + 1;
            int right = 2 * index + 2;

            if (left < size && heap[left] > heap[largest]) {
                largest = left;
            }
            if (right < size && heap[right] > heap[largest]) {
                largest = right;
            }

            if (largest != index) {
                swap(heap[index], heap[largest]);
                index = largest;
            } else {
                break;
            }
        }
    }

public:
    // Function to insert a new element into the heap
    void insert(int value) {
        heap.push_back(value);
        heapifyUp(heap.size() - 1);
        cout << "Inserted " << value << " into the heap." << endl;
    }

    // Function to delete the root element from the heap
    void deleteRoot() {
        if (heap.empty()) {
            cout << "Heap is empty. Cannot delete element." << endl;
            return;
        }

        cout << "Deleted root element: " << heap[0] << endl;
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
    }

    // Function to display the heap
    void display() {
        if (heap.empty()) {
            cout << "Heap is empty." << endl;
            return;
        }

        cout << "Heap elements: ";
        for (int value : heap) {
            cout << value << " ";
        }
        cout << endl;
    }
};

int main() {
    MaxHeap heap;

    // Insert elements
    heap.insert(10);
    heap.insert(20);
    heap.insert(5);
    heap.insert(30);
    heap.insert(25);

    // Display the heap
    heap.display();

    // Delete the root element
    heap.deleteRoot();
    heap.display();

    // Insert more elements
    heap.insert(40);
    heap.insert(15);

    // Display the heap
    heap.display();

    // Delete the root element again
    heap.deleteRoot();
    heap.display();

    return 0;
}
