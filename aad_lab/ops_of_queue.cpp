#include <iostream>
using namespace std;

class Queue {
    public:
    int* arr;
    int qfront;
    int rear;
    int size;


    Queue() {
        size = 10000;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    void enqueue(int data) {
        if (rear == size) {
            cout << "The Queue is full" << endl;
            return;
        } else {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if (qfront == rear) {
            cout << "The Queue is empty" << endl;
            return -1; // Or some other indicator of an empty queue
        } else {
            int ans = arr[qfront];
            arr[qfront] = -1; // Optional: Mark dequeued element
            qfront++;
            if (qfront == rear) {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front() {
        if (qfront == rear) {
            return -1; // Or some other indicator of an empty queue
        } else {
            return arr[qfront]; // Return the value, not the index
        }
    }

    bool isEmpty() {
        return (qfront == rear);
    }
};

int main() {
    Queue q;

    // Example usage:
    q.enqueue(10);
    q.enqueue(20);
    cout << "qfront element: " << q.front() << endl; 
    cout << "Dequeued element: " << q.dequeue() << endl;
    q.enqueue(50);
    cout << "Dequeued element: " << q.dequeue() << endl;
    cout << "Is the queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}