#include <iostream>
using namespace std;

class Node {
public:
    Node* next;
    int data;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

void deletefromEnd(Node*& head) {
    if (head == NULL) {
        return;
    }
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

void printlist(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    deletefromEnd(head);
    printlist(head);

    return 0;
}