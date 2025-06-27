#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* push(Node* top, int val) {
    Node* newNode = new Node{val, top};
    return newNode;
}

Node* pop(Node* top) {
    if (!top) {
        cout << "Stack Underflow!\n";
        return nullptr;
    }
    Node* temp = top->next;
    delete top;
    return temp;
}

void traverse(Node* top) {
    Node* temp = top;
    cout << "Stack: ";
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* top = nullptr;
    int choice, val;
    while (true) {
        cout << "\n1. Push\n2. Pop\n3. Traverse\n4. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> val;
                top = push(top, val);
                break;
            case 2:
                top = pop(top);
                break;
            case 3:
                traverse(top);
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid!\n";
        }
    }
    return 0;
} 