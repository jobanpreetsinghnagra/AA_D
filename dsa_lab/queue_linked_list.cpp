#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* insert(Node* rear, int val) {
    Node* newNode = new Node{val, nullptr};
    if (!rear) return newNode;
    Node* temp = rear;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
    return rear;
}

Node* deleteFront(Node* front) {
    if (!front) {
        cout << "Queue Underflow!\n";
        return nullptr;
    }
    Node* temp = front->next;
    delete front;
    return temp;
}

void display(Node* front) {
    cout << "Queue: ";
    while (front) {
        cout << front->data << " ";
        front = front->next;
    }
    cout << endl;
}

int main() {
    Node* front = nullptr;
    int choice, val;
    while (true) {
        cout << "\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> val;
                front = insert(front, val);
                break;
            case 2:
                front = deleteFront(front);
                break;
            case 3:
                display(front);
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid!\n";
        }
    }
    return 0;
} 