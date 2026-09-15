//Insert At Begining:
#include<iostream>
using namespace std;
class Node{
    public:
     int data;
     Node *next;
     Node(int value){
        data=value;
        next=NULL;
     }
};
void insertAtBeginning(Node*& head,int value){
    Node* newNode=new Node(value);
    newNode->next=head;
    head=newNode;
}
void printList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head = new Node(20);

    head->next = new Node(30);
    head->next->next = new Node(40);

    insertAtBeginning(head, 10);

    printList(head);

    return 0;
}