#include <iostream>
using namespace std;

struct Student {
    int roll_no, age;
    string name, address;
};

struct Node {
    Student data;
    Node* left;
    Node* right;
};

Node* insert(Node* root, Student s) {
    if (!root) {
        Node* node = new Node{s, nullptr, nullptr};
        return node;
    }
    if (s.roll_no < root->data.roll_no)
        root->left = insert(root->left, s);
    else if (s.roll_no > root->data.roll_no)
        root->right = insert(root->right, s);
    return root;
}

Node* findMin(Node* root) {
    while (root && root->left) root = root->left;
    return root;
}

Node* remove(Node* root, int roll_no) {
    if (!root) return nullptr;
    if (roll_no < root->data.roll_no)
        root->left = remove(root->left, roll_no);
    else if (roll_no > root->data.roll_no)
        root->right = remove(root->right, roll_no);
    else {
        if (!root->left) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (!root->right) {
            Node* temp = root->left;
            delete root;
            return temp;
        } else {
            Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = remove(root->right, temp->data.roll_no);
        }
    }
    return root;
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data.roll_no << " " << root->data.name << " " << root->data.age << " " << root->data.address << endl;
    inorder(root->right);
}

void preorder(Node* root) {
    if (!root) return;
    cout << root->data.roll_no << " " << root->data.name << " " << root->data.age << " " << root->data.address << endl;
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data.roll_no << " " << root->data.name << " " << root->data.age << " " << root->data.address << endl;
}

int main() {
    Node* root = nullptr;
    int choice;
    while (true) {
        cout << "\n1. Insert\n2. Delete\n3. Inorder\n4. Preorder\n5. Postorder\n6. Exit\nEnter choice: ";
        cin >> choice;
        if (choice == 1) {
            Student s;
            cout << "Enter roll_no, name, age, address: ";
            cin >> s.roll_no >> s.name >> s.age >> s.address;
            root = insert(root, s);
        } else if (choice == 2) {
            int roll_no;
            cout << "Enter roll_no to delete: ";
            cin >> roll_no;
            root = remove(root, roll_no);
        } else if (choice == 3) {
            inorder(root);
        } else if (choice == 4) {
            preorder(root);
        } else if (choice == 5) {
            postorder(root);
        } else if (choice == 6) {
            break;
        } else {
            cout << "Invalid!\n";
        }
    }
    return 0;
} 