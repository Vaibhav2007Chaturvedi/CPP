#include<iostream>
using namespace std;
class Node{
    public:
     int data;
     Node* next;
     Node(int value){
        data=value;
        next=NULL;
     }
};
Node* reverseList
(Node*& head){
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL){
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
void printList(Node* head) {
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

    head = reverseList(head);

    printList(head);

    return 0;
}