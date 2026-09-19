#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

Node* mergeLists(Node* head1, Node* head2) {

    // If one list is empty
    if (head1 == NULL)
        return head2;

    if (head2 == NULL)
        return head1;

    Node* head = NULL;
    Node* tail = NULL;

    Node* temp1 = head1;
    Node* temp2 = head2;

    // Compare both lists
    while (temp1 != NULL && temp2 != NULL) {

        Node* newNode;

        if (temp1->data < temp2->data) {
            newNode = temp1;
            temp1 = temp1->next;
        }
        else {
            newNode = temp2;
            temp2 = temp2->next;
        }

        // First node
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }

        // Add node at the end
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Attach remaining nodes
    if (temp1 != NULL) {
        tail->next = temp1;
    }

    if (temp2 != NULL) {
        tail->next = temp2;
    }

    return head;
}

void printList(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {

    // List 1: 10 -> 30 -> 50
    Node* head1 = new Node(10);
    head1->next = new Node(30);
    head1->next->next = new Node(50);

    // List 2: 20 -> 40 -> 60
    Node* head2 = new Node(20);
    head2->next = new Node(40);
    head2->next->next = new Node(60);

    Node* head = mergeLists(head1, head2);

    cout << "Merged List: ";
    printList(head);

    return 0;
}