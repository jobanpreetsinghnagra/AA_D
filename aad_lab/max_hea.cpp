#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    // Creating a max-heap using the priority_queue container.
    priority_queue<int> maxHeap; // Max-Heap: by default, the priority_queue is a max heap in C++

    // Insert elements into the heap.
    maxHeap.push(10); // Insert 10 into the max-heap.
    maxHeap.push(20); // Insert 20 into the max-heap.
    maxHeap.push(15); // Insert 15 into the max-heap.
    maxHeap.push(30); // Insert 30 into the max-heap.

    // Display the heap after insertions.
    cout << "Heap after insertions: ";

    // Copy the maxHeap into a temporary variable for displaying the elements
    priority_queue<int> temp = maxHeap; // temp will be used to display the heap elements without modifying the original heap
    while (!temp.empty()) {  // As long as there are elements in the heap
        cout << temp.top() << " ";  // Print the top element of the heap (maximum element)
        temp.pop();  // Remove the top element from the temporary heap
    }
    cout << endl;  // End the line after printing all elements

    // Delete the top element (maximum element) from the heap.
    cout << "Heap after deletion: ";

    // Remove the top element (maximum) from the maxHeap
    maxHeap.pop();  // Removes the maximum element from the heap.

    // Display the heap after deletion (display the remaining elements)
    while (!maxHeap.empty()) {  // As long as there are elements in the heap
        cout << maxHeap.top() << " ";  // Print the top element of the heap
        maxHeap.pop();  // Remove the top element from the original heap
    }
    cout << endl;  // End the line after printing all remaining elements in the heap

    return 0;  // End of program
}
