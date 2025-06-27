#include <iostream>
using namespace std;

struct Node {
    int id;
    string name;
    Node* prev;
    Node* next;
};

Node* insertFront(Node* head, int id, string name) {
    Node* newNode = new Node{id, name, nullptr, head};
    if (head) head->prev = newNode;
    return newNode;
}

Node* deleteEnd(Node* head) {
    if (!head) return nullptr;
    if (!head->next) {
        delete head;
        return nullptr;
    }
    Node* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->prev->next = nullptr;
    delete temp;
    return head;
}

void display(Node* head) {
    while (head) {
        cout << head->id << " " << head->name << " <-> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = nullptr;
    int choice, id;
    string name;
    while (true) {
        cout << "\n1. Insert at front\n2. Delete at end\n3. Display\n4. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter employee id and name: ";
                cin >> id >> name;
                head = insertFront(head, id, name);
                break;
            case 2:
                head = deleteEnd(head);
                break;
            case 3:
                display(head);
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid!\n";
        }
    }
    return 0;
} 