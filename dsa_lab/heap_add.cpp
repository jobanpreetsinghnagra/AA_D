#include <iostream>
#include <vector>
using namespace std;

class MaxHeap {
    vector<int> heap;
public:
    void insert(int val) {
        heap.push_back(val);
        int i = heap.size() - 1;
        while (i > 0 && heap[(i-1)/2] < heap[i]) {
            swap(heap[i], heap[(i-1)/2]);
            i = (i-1)/2;
        }
    }
    void deleteMax() {
        if (heap.empty()) {
            cout << "Heap is empty!\n";
            return;
        }
        cout << "Deleted: " << heap[0] << endl;
        heap[0] = heap.back();
        heap.pop_back();
        int i = 0, n = heap.size();
        while (2*i+1 < n) {
            int j = 2*i+1;
            if (j+1 < n && heap[j+1] > heap[j]) j++;
            if (heap[i] >= heap[j]) break;
            swap(heap[i], heap[j]);
            i = j;
        }
    }
    void display() {
        cout << "Heap: ";
        for (int v : heap) cout << v << " ";
        cout << endl;
    }
};

int main() {
    MaxHeap h;
    int choice, val;
    while (true) {
        cout << "\n1. Insert\n2. Delete Max\n3. Display\n4. Exit\nEnter choice: ";
        cin >> choice;
        if (choice == 1) {
            cout << "Enter value: ";
            cin >> val;
            h.insert(val);
        } else if (choice == 2) {
            h.deleteMax();
        } else if (choice == 3) {
            h.display();
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid!\n";
        }
    }
    return 0;
} 