#include <iostream>
using namespace std;

struct Node {
    int code;
    string name;
    Node* next;
};

Node* insertFront(Node* tail, int code, string name) {
    Node* newNode = new Node{code, name, nullptr};
    if (!tail) {
        newNode->next = newNode;
        return newNode;
    }
    newNode->next = tail->next;
    tail->next = newNode;
    return tail;
}

Node* deleteEnd(Node* tail) {
    if (!tail) return nullptr;
    if (tail->next == tail) {
        delete tail;
        return nullptr;
    }
    Node* temp = tail->next;
    Node* prev = tail;
    while (temp->next != tail) {
        temp = temp->next;
        prev = prev->next;
    }
    prev->next = tail->next;
    delete tail;
    return prev;
}

void display(Node* tail) {
    if (!tail) {
        cout << "List is empty\n";
        return;
    }
    Node* temp = tail->next;
    do {
        cout << temp->code << " " << temp->name << " -> ";
        temp = temp->next;
    } while (temp != tail->next);
    cout << "(head)\n";
}

int main() {
    Node* tail = nullptr;
    int choice, code;
    string name;
    while (true) {
        cout << "\n1. Insert at front\n2. Delete at end\n3. Display\n4. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter college code and name: ";
                cin >> code >> name;
                tail = insertFront(tail, code, name);
                break;
            case 2:
                tail = deleteEnd(tail);
                break;
            case 3:
                display(tail);
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid!\n";
        }
    }
    return 0;
} 