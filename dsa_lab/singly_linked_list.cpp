#include <iostream>
using namespace std;

struct Node {
    int roll;
    string name;
    Node* next;
};

Node* insertAtPos(Node* head, int pos, int roll, string name) {
    Node* newNode = new Node{roll, name, nullptr};
    if (pos == 0) {
        newNode->next = head;
        return newNode;
    }
    Node* temp = head;
    for (int i = 0; temp && i < pos-1; i++)
        temp = temp->next;
    if (!temp) return head;
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

Node* deleteByRoll(Node* head, int roll) {
    if (!head) return nullptr;
    if (head->roll == roll) {
        Node* temp = head->next;
        delete head;
        return temp;
    }
    Node* curr = head;
    while (curr->next && curr->next->roll != roll)
        curr = curr->next;
    if (curr->next) {
        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }
    return head;
}

Node* reverse(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    while (curr) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void display(Node* head) {
    while (head) {
        cout << head->roll << " " << head->name << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = nullptr;
    int choice, pos, roll;
    string name;
    while (true) {
        cout << "\n1. Insert at position\n2. Delete by roll\n3. Reverse\n4. Display\n5. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter position, roll, name: ";
                cin >> pos >> roll >> name;
                head = insertAtPos(head, pos, roll, name);
                break;
            case 2:
                cout << "Enter roll to delete: ";
                cin >> roll;
                head = deleteByRoll(head, roll);
                break;
            case 3:
                head = reverse(head);
                break;
            case 4:
                display(head);
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid!\n";
        }
    }
    return 0;
} 