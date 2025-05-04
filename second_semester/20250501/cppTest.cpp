#include <iostream>
#include <unordered_set>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int d): data(d), next(nullptr) {}
};

void push(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);
    if (!head) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

Node* removeDuplicates(Node* head) {
    unordered_set<int> seen;
    Node* current = head;
    Node* prev = nullptr;
    while (current) {
        if (seen.count(current->data)) {
            prev->next = current->next;
            delete current;
            current = prev->next;
        } else {
            seen.insert(current->data);
            prev = current;
            current = current->next;
        }
    }
    return head;
}

void printList(Node* head) {
    while (head) {
        if(head->next == nullptr)
            cout << head->data << "\n";
        else
            cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    int n;
    while (cin >> n) {
        if(getchar() == '\n') 
            break;
        push(head, tail, n);
    }
    head = removeDuplicates(head);
    printList(head);
    
    return 0;
}
